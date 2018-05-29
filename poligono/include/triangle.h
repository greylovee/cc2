#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "polygon.h"

class triangle : public polygon
{
    public:
        triangle (int a,int b) : polygon (a,b) {}
        int area();
};

#endif // TRIANGLE_H
