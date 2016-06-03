#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;
int f[1000000]={0};
bool isprime(long long int n)
{
    if(n%2==1)
    {
        if(f[(n-1)/2]==1)
        {
            return true;
        }
        else if(f[(n-1)/2]==2)
        {
            return false;
        }
        for(long long int i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
            {
                f[(n-1)/2]=2;
                return false;
            }
        }
        f[(n-1)/2]=1;
        return true;
    }
    else
    {
        if(n==2)
            return true;
        return false;
    }
}
int main()
{
    int t,i,j;
    long long int n,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        c=0;
        for(j=2;j<=n;j++)
        {
            if(isprime(j))
            {
                c=c+j;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
