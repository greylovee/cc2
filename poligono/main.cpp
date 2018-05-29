#include <iostream>
#include "polygon.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;


int main()
{
    polygon *ppoly1 = new rectangle (4,5);
    polygon *ppoly2 = new triangle (4,5);
    ppoly1 -> printarea();
    ppoly2 ->printarea();
    delete ppoly1;
    delete ppoly2;
    //rectangle rect;
    //triangle trgl;
    //polygon poly;
    //polygon *ppoly1 = &rect;
    //polygon *ppoly2 = &trgl;
   // polygon *ppoly3 = &poly;
    //ppoly1 -> set_values(4,5);
    //ppoly2 ->set_values(4,5);
   // ppoly1 -> printarea();
   // ppoly2 ->printarea();
    //ppoly3 -> set_values(4,5);
    //cout << ppoly1->area() << '\n';
    //cout << ppoly2->area() << '\n';
    //cout << ppoly3->area() << '\n';
}
