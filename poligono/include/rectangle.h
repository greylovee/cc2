#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "polygon.h"

class rectangle : public polygon
{
    public:
        rectangle(int a,int b) : polygon (a,b) {}
        int area();

};

#endif // RECTANGLE_H
