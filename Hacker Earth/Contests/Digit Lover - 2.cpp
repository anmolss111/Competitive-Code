#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    long int t;
    int a,b,i,c;
    cin>>t;
    string x,y;
    while(t--)
    {
        cin>>x;
        cin>>y;
        c=min(x.length(),y.length());
        for(i=0;i<c;i++)
        {
            a=x[i]-48;
            b=y[i]-48;
            cout<<a+b;
        }
        cout<<endl;
    }
    return 0;
}
