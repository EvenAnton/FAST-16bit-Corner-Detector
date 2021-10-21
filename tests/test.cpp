#include <iostream>
#include <fstream>
#include <string>
#include <opencv2/opencv.hpp>

#include "fast.hpp"

int main(int, char**) {

    const int height = 512;
    const int width = 640;
    const char encoding[] = "16UC1";
    uint8_t buffer[height*width*2];

    // Read image from comma separated file
    std::string snum;
    std::fstream instream;
    instream.open("data/image.txt", std::ios::in);
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


    // Extract keypoints using OpenCV FAST from rescaled image
    std::vector<cv::KeyPoint> cv_keypoints;
    cv::Ptr<cv::FastFeatureDetector> cv_fast_detector = cv::FastFeatureDetector::create(14);
    cv_fast_detector->detect(rescaled_image, cv_keypoints);
    cv::Mat cv_keypoints_image;
    cv::drawKeypoints(rescaled_image, cv_keypoints, cv_keypoints_image);
    
    // Extract keypoints using 16 bit FAST
    fast_16bit_corner_detector detector_16bit(14);
    std::vector<cv::KeyPoint> keypoints_16bit = detector_16bit.detect(image);
    cv::Mat keypoints_16bit_image;
    cv::drawKeypoints(rescaled_image, keypoints_16bit, keypoints_16bit_image);

    std::cout << "Number of CV corners: " << cv_keypoints.size() << std::endl;
    std::cout << "Number of 16bit corners: " << keypoints_16bit.size() << std::endl;

    // Show images
    // cv::imshow("image", image);
    // cv::imshow("normalized_image", normalized_image);
    cv::imshow("OpenCV fast keypoints", cv_keypoints_image);
    cv::imshow("16bit fast keypoints", keypoints_16bit_image);
    cv::waitKey();


}
