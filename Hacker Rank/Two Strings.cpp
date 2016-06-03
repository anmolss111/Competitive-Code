#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    int t,i,j,k,n,a[26][2],c,b;
    string x,y,z;
    cin>>t;
    for(k=0;k<t;k++)
    {
        for(i=0;i<26;i++)
            for(j=0;j<2;j++)
                a[i][j]=0;
        c=0;
        cin>>x>>y;
        for(i=0;i<x.length();i++)
        {
            a[x[i]-97][0]++;
            a[y[i]-97][1]++;
        }
        for(i=0;i<26;i++)
            cout<<a[i][1]<<" "<<a[i][0];
        cout<<c/2<<endl;
    }
    return 0;
}
