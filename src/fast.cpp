#include "fast.hpp"

std::vector<cv::KeyPoint> fast_16bit_corner_detector::detect(const cv::Mat im)
{
  calculate_16bit_threshold(im);
	std::vector<xy> corners = fast9_detect(im);
	std::vector<int> scores = fast9_score(im, corners);
	std::vector<cv::KeyPoint> keypoints = nonmax_suppression(corners, scores);

	return keypoints;
}

void fast_16bit_corner_detector::calculate_16bit_threshold(cv::Mat im) {
  cv::minMaxIdx(im, &minVal, &maxVal);
  threshold = threshold_8bit * (maxVal-minVal) / 256;
}
