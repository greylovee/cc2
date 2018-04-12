//Implemente un programa que solicite el ingreso de 3 numeros e imprima: (i)
//el menor, (ii) el mayor y (iii) el promedio de dichos numeros.

#include <iostream>
using namespace std;
int  MayMenProm(int a,int b,int c ,int mayor,int menor, int prom)
{
  if (a > b && a > c)

    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
    if (a < b && a < c)
        cout <<" el menor es "<<a<<endl;
    if (b < a && b < c)
        cout <<" el menor es " <<b<<endl;
    if (c < a && c < b)
        cout << " el menos es "<<c<<endl;



    prom = (a+b+c)/3;




}
int main ()
{
    int mayor, menor;
    float prom;
    MayMenProm(3,4,5,0,0,0);
    cout <<prom<<endl;
    return 0;





}
