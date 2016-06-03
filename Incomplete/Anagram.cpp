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
    int t,i,j,k,n,a[26][2],c;
    string x,y,z;
    cin>>t;
    for(k=0;k<t;k++)
    {
        c=0;
        for(i=0;i<26;i++)
            for(j=0;j<2;j++)
                a[i][j]=0;
        cin>>x;
        if(x.length()%2==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        n=x.length()/2;
        for(i=0;i<n;i++)
        {
            y[i]=x[i];
            z[i]=x[n+i];
            a[y[i]-97][0]++;
            a[z[i]-97][1]++;
        }
        for(i=0;i<26;i++)
        {
            c=c+abs(a[i][1]-a[i][0]);
        }
        cout<<c/2<<endl;
    }
    return 0;
}
