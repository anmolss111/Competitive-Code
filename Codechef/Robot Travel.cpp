#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long int t,a,b,m,c,i;
    scanf("%lld",&t);
    for(i=0;i<t/2;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&m);
        int f=0;
        if((b-a)%m!=0)
            f=1;
        c=(b-a)/m;
        if(f==1)
            c++;
        cout<<c<<endl;
        scanf("%lld %lld %lld",&a,&b,&m);
        f=0;
        if((b-a)%m!=0)
            f=1;
        c=(b-a)/m;
        if(f==1)
            c++;
        cout<<c<<endl;
    }
    if(t%2==1)
    {
        scanf("%lld %lld %lld",&a,&b,&m);
        int f=0;
        if((b-a)%m!=0)
            f=1;
        c=(b-a)/m;
        if(f==1)
            c++;
        cout<<c<<endl;
    }
    return 0;
}
