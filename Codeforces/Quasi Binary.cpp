#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
long int binary(int n)
{
    int x=n,i=0,j;
    long int c,d=0;
    while(x!=0)
    {
        c=1;
        for(j=0;j<i;j++)
            c=c*10;
        c=c*(x%2);
        d=d+c;
        x=x/2;
        i++;
    }
    return d;
}
int main()
{
    long int n,i,c,j;
    cin>>n;
    long int a[65],b[65]={0};
    for(i=0;i<=64;i++)
    {
        a[i]=binary(i);
    }
    c=0;
    while(n!=0)
    {
        for(i=64;i>=1;i--)
        {
            if(a[i]<=n)
                break;
        }
        n=n-a[i];
        b[i]++;
        c++;
    }
    cout<<c<<endl;
    for(i=0;i<65;)
    {
        if(b[i]!=0)
        {
            cout<<a[i]<<" ";
            b[i]--;
        }
        else
            i++;
    }
    return 0;
}
