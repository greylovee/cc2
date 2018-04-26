
#include <iostream>
using namespace std;

int main()
{
    char a[]="Grettzel";
    char b[20]="Vargas";

    int tam1=(sizeof a/sizeof *a)-1;
    int tam2=(sizeof b/sizeof *b)-1;
    int tam3=tam1+tam2 -2;
    char c[tam3];
    char *p=a;
    char *q=&a[tam1];
    char *r=b;
    char *s=&b[tam2];
    char *t=c;
    char *w=&c[tam3];
    
    for (;p<q;p++)
    {
       *t=*p;
       t++;
    }
    for (;r<s;r++)
    {
       *t=*r;
       t++;
    }

   
    cout <<c;

    return 0;
}

