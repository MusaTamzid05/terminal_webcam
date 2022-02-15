#ifndef CAMERA_H
#define CAMERA_H

namespace Engine {
    struct Camera {
        bool is_running() const;
        void load_current_image();
    };
}

#endif
