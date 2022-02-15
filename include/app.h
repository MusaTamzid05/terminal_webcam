#ifndef APP_H
#define APP_H

namespace Engine {
    struct Camera;
    struct Terminal;

    struct App {

        App();
        void run();

        Camera* m_camera;
        Terminal* m_terminal;
    };
}
#endif
