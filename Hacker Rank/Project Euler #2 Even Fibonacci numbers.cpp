#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;
long long int f[1000000]={0};
long long int fib(long long int n)
{
    if(f[n]!=0)
    {
        return f[n];
    }
    else
    {
        if(n==1||n==2)
        {
            f[n]=n;
            return n;
        }
        f[n]=fib(n-1)+fib(n-2);
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    long int t,i,j;
    long long int n,a;
    cin>>t;
    for(i=0;i<t;i++)
    {
        uint64_t c=0;
        cin>>n;
        for(j=1;;j++)
        {
            a=fib(j);
            if(a>=n)
                break;
            if(a%2==0)
                c=c+a;
        }
        cout<<c<<endl;
    }
    return 0;
}
