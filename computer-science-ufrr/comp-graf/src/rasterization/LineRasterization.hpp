#ifndef RASTERIZATION_HPP
#define RASTERIZATION_HPP

#include <iostream>
#include "array.hpp"
#include <math.h>

namespace rtz{
    class Line{
        private:
        public:
            void analytical(int x1, int y1, int x2, int y2, arr::Array frame_buffer);
            void dda(int x1, int y1, int x2, int y2, arr::Array frame_buffer);
            void bresenham(int x1, int y1, int x2, int y2, arr::Array frame_buffer);
    };
}

#endif // RASTERIZATION_HPP