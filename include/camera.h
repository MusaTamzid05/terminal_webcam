#ifndef CAMERA_H
#define CAMERA_H

#include <opencv2/opencv.hpp>

namespace Engine {
    struct Camera {
        Camera();
        bool is_running() const;
        void load_image(cv::Mat& image);

        cv::VideoCapture cam;
    };
}

#endif
