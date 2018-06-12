#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
using namespace std;


template <typename T>
class container {
    private:
        T elt;
    public:
        container(const T arg): elt(arg){}
        T inc() {return elt+1;}
};
template <>
class container <char> {
    private:
        char elt;
    public:
        container (const char arg):elt(arg){}
        char uppercase(){return toupper(elt);}
};
#endif // CONTAINER_H
