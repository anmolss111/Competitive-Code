#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    float z[3],p,q,r,x,y,a,b,c;
    int i,j;
    cin>>z[0]>>z[1]>>z[2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(z[j]<z[j+1])
            {
                swap(z[j],z[j+1]);
            }
        }
    }
    a=z[0];
    b=z[1];
    c=z[2];
    p=a*a;
    q=b*b;
    r=c*c;
    x=b+c;
    y=q+r;
    if(a>=x)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
        return 0;
    }
    if(p==y)
        cout<<"TRIANGULO RETANGULO"<<endl;
    if(p>y)
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    if(p<y)
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(a==b&&b==c)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else
        if(a==b||b==c||a==c)
            cout<<"TRIANGULO ISOSCELES"<<endl;
    return 0;
}
