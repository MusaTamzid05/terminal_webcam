#include "converter.h"
#include <iostream>

namespace Engine {
    Converter::Converter(float diff) {
        generate_data(diff);

    }


    void Converter::convert(int value) const {
        for(Data item : data) {
            if((value >= item.min) && (value <= item.max)) {
                std::cout << item.value;
                break;
            }
        }
    }


    void Converter::generate_data(float diff) {
        char arr[] = {'!', '@', '#', '%', '$', '&', '*', '(', ')', '_', '+', '=', '/', '<', '>', '?', '}', '{', ']', '['};

        int current_range = 0;

        while(current_range <= 255) {
            int start = current_range;
            int end = start + diff;

            if(end > 255)
                end = 255;

            data.push_back(Data(start, end, arr[data.size()]));
            current_range = end + 1;

        }

    }
}
