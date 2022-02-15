#ifndef APP_H
#define APP_H

namespace Engine {
    struct Camera;
    struct Terminal;

    struct App {

        Camera* m_camera;
        Terminal* m_terminal;
    };
}
#endif
