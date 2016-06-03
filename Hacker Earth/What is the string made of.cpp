#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    string x;
    cin>>x;
    long int c=0,i,d;
    for(i=0;i<x.length();i++)
    {
        if(x[i]=='0')
            d=6;
        else if(x[i]=='1')
            d=2;
        else if(x[i]=='2')
            d=5;
        else if(x[i]=='3')
            d=5;
        else if(x[i]=='4')
            d=4;
        else if(x[i]=='5')
            d=5;
        else if(x[i]=='6')
            d=6;
        else if(x[i]=='7')
            d=3;
        else if(x[i]=='8')
            d=7;
        else if(x[i]=='9')
            d=6;
        c=c+d;
    }
    cout<<c<<endl;
    return 0;
}
