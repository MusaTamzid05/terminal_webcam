#ifndef TERMINAL_H
#define TERMINAL_H

#include <opencv2/opencv.hpp>
#include "converter.h"

namespace Engine {
    struct Terminal {

        Terminal();

        void draw_image_from(const cv::Mat& image) const ;
        void init_window_size();

        void print_value(int value) const;


        int rows;
        int cols;

        Converter converter;


    };
}

#endif
