#ifndef FAST_H
#define FAST_H

#include <opencv2/opencv.hpp>


class fast_16bit_corner_detector 
{
    public:
        fast_16bit_corner_detector(uint8_t threshold_8bit=10) : threshold_8bit(threshold_8bit) {};
        std::vector<cv::KeyPoint> detect(const cv::Mat im);

    private:
        const uint8_t threshold_8bit; // FAST threshold as if this was an 8bit algorithm
        uint16_t threshold; 
        
        typedef struct
        {
            int x, y;
        } xy;

        double minVal, maxVal;

        int fast9_corner_score(const uint16_t* p, const int pixel[]);
        std::vector<int> fast9_score(cv::Mat im, std::vector<xy> corners);
        std::vector<xy> fast9_detect(const cv::Mat im);
        std::vector<cv::KeyPoint> nonmax_suppression(const std::vector<xy> corners, const std::vector<int> scores);
        void calculate_16bit_threshold(cv::Mat im);

};

#endif
