#include <iostream>
#include "container.h"
#include "point.h"

using namespace std;
/*template <typename T >
T suma(const T a, const T b)
{
    return a+b;
}

template < typename T , typename U>
U suma (const T a, const U b)
{
    return a+b;
}
template <typename T>
class point {
    private:
        T x,y;
    public:
        point (const T u , const T v):x(u),y(v) {}
        T getX() {return x;}
        T getY() {return y;}
};*/


int main()
{
    //cout << suma <int>(1,2)<< endl;
    //cout << suma <float> (1.21,2.43)<< endl;
    //cout << suma (1,2)<< endl;

    //cout << suma  (1.21,2.43)<< endl;
    //cout << suma< int ,float > (1,2.5)<<endl;
    //point < float > fpoint(2.5,3.5);
    //cout << fpoint.getX() << "," <<fpoint.getY() <<endl;
    container <int> icon(5);
    container<char> ccont('r');
    cout << icon.inc() <<endl;
    cout << ccont.uppercase()<<endl;

}
