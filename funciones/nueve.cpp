
//Implemente un programa que evalue si un año es bisiesto.

#include <iostream>
using namespace std;
bool bisiesto(int anho){
    return  (anho%4 == 0 && (anho%100!= 0  || anho%4==0));Me
}
int main ()
{

    cout << bisiesto(2004)<<endl;
    return 0;
}
