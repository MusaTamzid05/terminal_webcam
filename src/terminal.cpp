#include "terminal.h"

#include <sys/ioctl.h>
#include <unistd.h>


#include <iostream>

namespace Engine {
    Terminal::Terminal():converter() {
        init_window_size();
    }


    void Terminal::init_window_size() {
        struct winsize size;
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
        rows = size.ws_row;
        cols = size.ws_col;
    }

    void Terminal::draw_image_from(const cv::Mat& image) const  {
        cv::Mat dst_image;

        cv::cvtColor(image, dst_image, cv::COLOR_BGR2GRAY);
        cv::resize(dst_image, dst_image, cv::Size(cols, rows), cv::INTER_LINEAR);


        for(unsigned int row = 0; row < dst_image.rows; row += 1) {
            for(unsigned int col = 0; col< dst_image.cols; col += 1) {
                int value = dst_image.at<uchar>(row, col);
                print_value(value);
            }

            std::cout << "\n";
        }

    }

    void Terminal::print_value(int value) const {
        converter.convert(value);
    }

}
