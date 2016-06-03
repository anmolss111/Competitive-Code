#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,t,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a,b,c[9],i;
        b=(k-1)/9;
        b++;
        a=(k-1)%9;
        if(k>81)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(i=0;i<b;i++)
            c[i]=i;
        for(i=b+1;i<10;i++)
            c[i-1]=i;
        for(i=0;i<n/2;i++)
            cout<<b<<c[a];
        if(n%2==1)
            cout<<b;
        cout<<endl;
    }
    return 0;
}
