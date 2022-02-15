#include "camera.h"

namespace Engine {
    Camera::Camera() {
        cam = cv::VideoCapture(0);

        if(!is_running()) 
            std::cerr << "Could not open camera.\n";
    }

    bool Camera::is_running() const {
        return cam.isOpened();
    }

    void Camera::load_image(cv::Mat& image) {
        cam >> image;
    }

}
