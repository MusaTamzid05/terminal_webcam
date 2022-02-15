#include "terminal.h"

#include <sys/ioctl.h>
#include <unistd.h>


#include <iostream>

namespace Engine {
    Terminal::Terminal() {
        init_window_size();
        std::cout  << "rows : " << rows << " cols : " << cols << "\n";

    }


    void Terminal::init_window_size() {
        struct winsize size;
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
        rows = size.ws_row;
        cols = size.ws_col;
    }

}
