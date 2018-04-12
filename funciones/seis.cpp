//Implemente un programa que solicite un numero n e imprima todos los numero primos menores a n.

#include <iostream>
using namespace std;
void MenPrimos(int num)
{
    int res=0,cont=0;
    for(int i=1;i<=num;i++)
      {
        for(int j=1;j<=i;j++)
        {
          res=i%j;
          if(res==0)
          {
            cont++;
          }
        }
        if(cont==2)
        {
          cout<<" "<<i;
        }
        cont=0;
      }
}
int main()
{
  MenPrimos(10);
}
