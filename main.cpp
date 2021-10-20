#include <iostream>
#include <fstream>
#include <string>
#include <opencv2/opencv.hpp>

#include "fast.hpp"

// extern "C" {
//     #include "fast.h"
// }



int main(int, char**) {

    const int height = 512;
    const int width = 640;
    const char encoding[] = "16UC1";
    uint8_t buffer[height*width*2];

    // Read image from comma separated file
    std::string snum;
    std::fstream instream;
    instream.open("../data/image.txt", std::ios::in);
    if (instream.is_open()) {
        int i = 0;
        while(std::getline(instream, snum, ',')){
            buffer[i] = std::stoi(snum);
            i++;
        }
    } else {
        std::cerr << "ERROR: Could not open file" << std::endl;
    }
    instream.close();

    cv::Mat image = cv::Mat(height, width, CV_16UC1, buffer);
    cv::Mat normalized_image;
    cv::normalize(image, normalized_image, 0, pow(2,16)-1, cv::NORM_MINMAX);
    cv::Mat rescaled_image;
    cv::normalize(image, rescaled_image, 0, 255, cv::NORM_MINMAX, CV_8U);


    double minVal, maxVal;
    cv::minMaxIdx(image, &minVal, &maxVal);
    std::cout << "minVal, maxVal: " << minVal << ", " << maxVal << std::endl;
    

    // Extract keypoints using OpenCV FAST from rescaled image
    std::vector<cv::KeyPoint> cv_keypoints;
    cv::Ptr<cv::FastFeatureDetector> cv_fast_detector = cv::FastFeatureDetector::create();
    cv_fast_detector->detect(rescaled_image, cv_keypoints);
    cv::Mat cv_keypoints_image;
    std::cout << "Number of cv corners: " << cv_keypoints.size() << std::endl;
    cv::drawKeypoints(rescaled_image, cv_keypoints, cv_keypoints_image);
    
    // Extract keypoints using original FAST on rescaled image
    // int num_corners;
    // xy *keypoints = fast9_detect_nonmax(rescaled_image.data, rescaled_image.cols, rescaled_image.rows, rescaled_image.step, 10, &num_corners);

    // // Convert to std::vector<cv::KeyPoint>
    // std::vector<cv::KeyPoint> fast_c_keypoints;
    // for (int i = 0; i < num_corners; i++) {
    //     cv::KeyPoint kp = cv::KeyPoint(keypoints[i].x, keypoints[i].y, 7.0);
    //     fast_c_keypoints.push_back(kp);
    // }
    // delete(keypoints);
    // cv::Mat fast_c_keypoints_image;
    // std::cout << "Number of C corners: " << num_corners << std::endl;
    // cv::drawKeypoints(rescaled_image, fast_c_keypoints, fast_c_keypoints_image);
    
    // std::cout << "step1: " << image.step1() << std::endl;

    // std::cout << image.step[0] << ", " << image.step[1] << std::endl << image.step1[0] << ", " << image.step1[1] << std::endl;
    // std::cout << (int)image.data << " " << (int)(image.data + 1) << " " << (int)((uint8_t*)image.data + 1) <<std::endl;

    // Extract keypoints using 16 bit FAST
    int threshold = 10 * (maxVal-minVal) / 250;
    std::cout << "Threshold: " << threshold << std::endl;
    std::vector<cv::KeyPoint> keypoints_16bit = fast9_detect_nonmax(image, threshold);
    std::cout << "Number of 16bit corners: " << keypoints_16bit.size() << std::endl;
    cv::Mat keypoints_16bit_image;
    cv::drawKeypoints(rescaled_image, keypoints_16bit, keypoints_16bit_image);

    // std::cout << image.type()<< std::endl;
    std::cout << *(unsigned short *)image.data << ", " << *(uint16_t*)image.data << std::endl;

    // Show images
    // cv::imshow("image", image);
    cv::imshow("normalized_image", normalized_image);
    cv::imshow("cv fast keypoints", cv_keypoints_image);
    // cv::imshow("C fast keypoints", fast_c_keypoints_image);
    cv::imshow("16bit fast keypoints", keypoints_16bit_image);
    cv::waitKey();


}
