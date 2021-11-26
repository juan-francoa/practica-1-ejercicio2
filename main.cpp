#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int g;
    cout<<"ingrese numero entero:";
    cin>>g;
    int c=0;
    int d=0;
    for(int b=10;b<g*10;b=b*10)
    {
        c=g%b;
        g=g-c;
        if(b>=100)
            c=c/(b/10);
        d=pow(c,c)+d;
    }
    cout<<d<<endl;
    return 0;
}
