#include "persona.h"

persona::persona(string n, int e)
{
    nombre = n;
    edad = e;

}

void persona :: cambiarNombre (string n)
{
        cout << " la persona se llama :  "<<nombre<< "   y se ha cambiado por: " << n<<endl;

}
void persona :: cambiarEdad(int e)
{
    cout << " la persona tiene   "<< edad << " anhos"<< "  y ahora tiene  "<< e<<endl;

}
string persona :: consultarNombre()
{
    return nombre;
}
int persona :: consultarEdad()
{
    return edad;
}
bool persona :: esMayordeEdad()
{
     return ( edad > 18) ?  true : false ;
}
