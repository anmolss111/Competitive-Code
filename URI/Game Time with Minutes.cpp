#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int x1,y1,x2,y2,z1,z2,z,h,m;
    cin>>x1>>y1>>x2>>y2;
    x1=x1*60;
    x2=x2*60;
    z1=x1+y1;
    z2=x2+y2;
    z=z2-z1;
    if(z<=0)
        z=z+24*60;
    h=z/60;
    m=z%60;
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    return 0;
}
