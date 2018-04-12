
// serie fibonacci

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n==0 || n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1)+ fibonacci(n-2);
    }

}
int main()

{
    int n;
    cout << "ingrese la cantidad de la serie  ";
    cin >>n;
    //for(int i = 0;i< n-1;i++)
        //cout <<"fibonacci "<<i+1<<" es " <<fibonacci(i);
    cout<<fibonacci(n);

}
