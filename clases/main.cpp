#include <iostream>
#include "persona.h"
using namespace std;

bool mayor(persona a)
{
    if (a.edad> 18)
        return true;
    else
        return false;
}


int main()
{
    persona p;
    p.nombre = "alma";
    p.edad = 21;
    persona ps[5];
    ps[0].nombre = "jorge";
    ps[0].edad = 3;
    ps[1].nombre = "eudardo";
    ps[1].edad = 54;
    ps[2].nombre = "alma";
    ps[2].edad = 14;
    ps[3].nombre = "rosa";
    ps[3].edad = 45;
    ps[4].nombre = "laura";
    ps[4].edad = 78;
    for (int i = 0 ; i<5 ; i++){
        if( p.nombre== ps[i].nombre)
            cout << " si existe"<<endl;
        else
            cout << " no existe"<<endl;
    }



    cout<<mayor(p)<<endl;
    cout<< p.nombre<<endl;
    cout << p.edad<<endl;


    return 0;
}
