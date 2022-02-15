cmake_minimum_required(VERSION 2.8)

project(Terminal)
find_package( OpenCV REQUIRED )
include_directories( include ${OpenCV_INCLUDE_DIRS} )
add_executable( Terminal
    src/main.cpp
    src/terminal.cpp
    src/app.cpp
    src/camera.cpp
    src/converter.cpp
    )
target_link_libraries(Terminal ${OpenCV_LIBS} )
