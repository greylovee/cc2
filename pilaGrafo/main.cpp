#include <iostream>
#include "geometry.h"
using namespace std;

int main()
{
    Point a ;
    Point b(3,3);
    Rectangle *ptr = new Rectangle(a,b);
    Triangle *tri = reinterpret_cast<Triangle*>(ptr);
}
