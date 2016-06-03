#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long int t,i,j,n,c;
    string x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a=0;
        c=0;
        cin>>x>>n;
        n=n*12;
        for(j=0;j<x.length();j++)
        {
            if(x[j]=='T')
                a=a+2;
            else if(x[j]='S')
                a=a+1;
        }
        for(j=1;j<=(n/a);j++)
        {
            c=c+n-a*j;
        }
        cout<<c<<endl;
    }
    return 0;
}
