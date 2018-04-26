
#include <iostream>
using namespace std;
/*void conca(char *p,char *q,char *r,char *s,char *t)
{
    for (;p<q;p++)
    {
       *c=*p;
       c++
    }
    for (;r<s;r++)
    {
       *c=*r;
       c++;
    }
}*/
/*void imprimir(char *t,char *w)
{
    for (;t<w;t++)
        cout <<t;
}*/
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
    //conca (p,q,r,s,t);
     //t=c;
    //imprimir (t,w);
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

    //for (t=c;t<w;t++)
    cout <<c;

    return 0;
}

