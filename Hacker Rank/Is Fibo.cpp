#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int *f=NULL;
long long int fib(long long int n)
{
    if(f[n]!=NULL)
        return f[n];
    if(n==0)
        f[n]=0;
    else if(n==1)
        f[n]=1;
    else
        f[n]=fib(n-1)+fib(n-2);
    return f[n];
}
int main()
{
    int a;
    long int t;
    long long int x;
    cin>>t;
    for(long int j=0;j<t;j++)
    {
        a=0;
        cin>>x;
        for(long int i=0;i<=x+1;i++)
        {
            if(fib(i)==x)
            {
                a=1;
                cout<<"IsFibo"<<endl;
                break;
            }
        }
        if(a==0)
        {
            cout<<"IsNotFibo"<<endl;
        }
    }
    return 0;
}
