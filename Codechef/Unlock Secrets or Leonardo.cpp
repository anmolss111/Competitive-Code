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
    int t,i,j,k,a[26][3],m,c;
    string x,y,z;
    cin>>t;
    for(k=0;k<t;k++)
    {
        for(i=0;i<26;i++)
            for(j=0;j<3;j++)
                a[i][j]=0;
        cin>>x>>y>>z;
        c=0;
        for(i=0;i<x.length();i++)
        {
            a[x[i]-97][0]++;
            a[y[i]-97][1]++;
            a[z[i]-97][2]++;
        }
        for(i=0;i<26;i++)
        {
            m=a[i][0];
            for(j=1;j<3;j++)
            {
                if(m>a[i][j])
                    m=a[i][j];
            }
            for(j=0;j<3;j++)
                c=c+a[i][j]-m;
        }
        cout<<c<<endl;
    }
    return 0;
}
