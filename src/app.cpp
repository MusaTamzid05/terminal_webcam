#include "app.h"
#include "terminal.h"
#include "camera.h"

#include <iostream>
#include <opencv2/opencv.hpp>


namespace Engine {
    App::App() {
        m_terminal = new Terminal();
        m_camera = new Camera();

    }

    void App::run() {

        cv::Mat frame;

        while(m_camera->is_running()) {
            m_camera->load_image(frame);

            std::cout << frame.rows << "\n";
        }
    }


}
