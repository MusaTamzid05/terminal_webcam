#ifndef CONVERTER_H
#define CONVERTER_H

#include <vector>

namespace Engine {
    struct Data {
        int min;
        int max;

        char value;

        Data(int min, int max, char value):
            min(min),
            max(max),
            value(value) {}
    };

    struct Converter {
        Converter(float diff = 20);

        std::vector<Data> data;
        void convert(int value) const;

        void generate_data(float diff = 20);

    };
}
#endif
