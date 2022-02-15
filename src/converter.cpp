#include "converter.h"
#include <iostream>

namespace Engine {
    Converter::Converter() {
        data.push_back(Data(0, 20, '#'));
        data.push_back(Data(21, 40, '@'));
        data.push_back(Data(41, 60, '#'));
        data.push_back(Data(61, 80, '^'));
        data.push_back(Data(81, 100, '%'));
        data.push_back(Data(101, 120, '&'));
        data.push_back(Data(121, 140, '*'));
        data.push_back(Data(141, 160, '('));
        data.push_back(Data(161, 180, ')'));
        data.push_back(Data(181, 200, '-'));
        data.push_back(Data(201, 221, '='));
        data.push_back(Data(221, 240, '+'));
        data.push_back(Data(241, 255, '>'));
    }


    void Converter::convert(int value) const {
        for(Data item : data) {
            if((value >= item.min) && (value <= item.max)) {
                std::cout << item.value;
                break;
            }
        }
    }
}
