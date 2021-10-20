#ifndef FAST_H
#define FAST_H

#include <opencv2/opencv.hpp>


// typedef unsigned char byte;

// int fast9_corner_score(const byte *p, const int pixel[], int bstart);

// std::vector<xy> fast9_detect(const cv::Mat im, int b);

// std::vector<int> fast9_score(cv::Mat im, std::vector<cv::KeyPoint> keypoints, int b);

// xy *fast9_detect_nonmax(const byte *im, int xsize, int ysize, int stride, int b, int *ret_num_corners);

// xy *nonmax_suppression(const xy *corners, const int *scores, int num_corners, int *ret_num_nonmax);
std::vector<cv::KeyPoint> fast9_detect_nonmax(const cv::Mat im, int b);

#endif
