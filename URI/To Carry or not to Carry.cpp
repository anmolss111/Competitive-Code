#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
long long int bd(int *a)
{
    long long int m,c=0;
    int i,j;
    for(i=0;i<32;i++)
    {
        if(a[i]==0)
            continue;
        m=1;
        for(j=0;j<i;j++)
            m=m*2;
        c=c+a[i]*m;
    }
    return c;
}
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        int p[32]={0},q[32]={0},c,r[32],i;
        i=0;
        while(a!=0)
        {
            p[i]=a%2;
            a=a/2;
            i++;
        }
        i=0;
        while(b!=0)
        {
            q[i]=b%2;
            b=b/2;
            i++;
        }
        for(i=0;i<32;i++)
        {
            c=p[i]+q[i];
            if(c==2)
                c=0;
            r[i]=c;
        }
        cout<<bd(r)<<endl;
    }
    return 0;
}
