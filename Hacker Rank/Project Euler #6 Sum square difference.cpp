#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    int t,n,i;
    uint64_t x,y,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        x=n*(n+1);
        x=x*(2*n+1);
        x=x/6;
        y=n*(n+1);
        y=y/2;
        z=y*y;
        cout<<z-x<<endl;
    }
    return 0;
}
