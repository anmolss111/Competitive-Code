#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int fact[21]={0};
int facto(int n)
{
    if(n==0||n==1)
    {
        fact[n]=1;
        return 0;
    }
    fact[n]=n*fact[n-1];
}
int main()
{
    int i;
    for(i=0;i<21;i++)
    {
        facto(i);
    }
    int t;
    long int a,b,c,x;
    long long int d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        for(x=0;x<21;x++)
        {
            d=a*x*x+b*x-c;
            if(d>=0)
                break;
        }
        cout<<fact[x]<<endl;
    }

    return 0;
}
