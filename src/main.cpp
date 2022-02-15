#include "app.h"

/*
#include <stdio.h>
#include <opencv2/opencv.hpp>


#include <sys/ioctl.h>
#include <unistd.h>


#include "terminal.h"

using namespace cv;
*/

int main(int argc, char** argv ) {
    /*
    struct winsize size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);



    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    Mat image;
    image = imread( argv[1], 1 );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }


    Mat dst_image;
    resize(image, dst_image, Size(64, 64), INTER_LINEAR);


    for(int i = 0; i < size.ws_row; i += 1) {
        for(int j = 0; j < size.ws_col; j += 1) {
            printf("-");
        }
            printf("\n");

    }
    */

    Engine::App app;
    app.run();



    return 0;
}
