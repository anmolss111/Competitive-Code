#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b,c;
        cin>>n;
        a=(n*(n+1))%1000007;
        b=(((n-1)*(n))/2)%1000007;
        if(n==1)
            b=0;
        else if(n==2)
            b=1;
        c=(a+b)%1000007;
        cout<<c<<endl;
    }
    return 0;
}
