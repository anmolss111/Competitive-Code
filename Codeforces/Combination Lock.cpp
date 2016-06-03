#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<ctype.h>
using namespace std;
int main()
{
    int n,a,i,b;
    long int c=0;
    cin>>n;
    string x,y;
    cin>>x>>y;
    for(i=0;i<n;i++)
    {
        a=x[i]-y[i];
        a=abs(a);
        b=10-a;
        if(b<a)
            a=b;
        c=c+a;
    }
    cout<<c<<endl;
    return 0;
}
