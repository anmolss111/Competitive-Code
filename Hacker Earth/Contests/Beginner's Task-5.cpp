#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int x,y,z,a,m;
    cin>>x>>y>>z;
    m=x;
    a=x+y*z;
    if(a>m)
        m=a;
    a=x*y+z;
    if(a>m)
        m=a;
    a=x*y*z;
    if(a>m)
        m=a;
    a=x+y+z;
    if(a>m)
        m=a;
    a=(x+y)*z;
    if(a>m)
        m=a;
    a=x*(y+z);
    if(a>m)
        m=a;
    cout<<m<<endl;
    return 0;
}
