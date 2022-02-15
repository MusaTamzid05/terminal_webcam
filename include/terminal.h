#ifndef TERMINAL_H
#define TERMINAL_H

namespace Engine {
    struct Terminal {

        Terminal();

        void draw_image_from();
        void init_window_size();


        int rows;
        int cols;


    };
}

#endif
