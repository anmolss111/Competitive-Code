#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int dtb(int a,int b[])
{
    for(int j=0;j<11;j++)
        b[j]=0;
    int i=0,temp;
    while(a!=0)
    {
        b[i]=a%2;
        a=a/2;
        i++;
    }
    return 0;
}
int btd(int b[])
{
    int a=0;
    for(int i=10;i>=0;i--)
    {
        if(b[i]==0)
            continue;
        else
            a=a+pow(2,i);
    }
    return a;
}
int mxor(int a,int b)
{
    int c[11],d[11];
    dtb(a,c);
    dtb(b,d);
    for(int i=0;i<11;i++)
    {
        if(c[i]==d[i])
            c[i]=0;
        else
            c[i]=1;
    }
    return btd(c);
}
int main()
{
    int l,r,i,j,m=0,t;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    {
        for(j=l;j<=r;j++)
        {
            if(i<=j)
            {
                t=mxor(i,j);
                if(t>m)
                    m=t;
            }
        }
    }
    cout<<m;
    return 0;
}
