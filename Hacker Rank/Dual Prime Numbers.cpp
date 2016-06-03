#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
#define m1 200
using namespace std;
long long int sumofdigits(long long int n)
{
    long long int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
bool isprime(long long int n)
{
    if(n==1||n==0)
        return false;
    if(n%2==0)
    {
        if(n==2)
            return true;
        return false;
    }
    for(long long int i=3;i<=sqrt(n);i=i+2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long int t,x,y,i,z,c;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        c=0;
        for(i=x;i<=y;i++)
        {
            if(isprime(i))
            {
                z=sumofdigits(i);
                if(isprime(z))
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
