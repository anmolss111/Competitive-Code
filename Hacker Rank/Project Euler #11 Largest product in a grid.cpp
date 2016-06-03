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
    int a[20][20],i,j,k,l;
    long long int m,n;
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
            cin>>a[i][j];
    for(i=0;i<20;i++)
    {
        for(j=0;j<17;j++)
        {
            m=1;
            for(k=j;k<j+4;k++)
            {
                m*=a[i][k];
            }
            if(n<m)
                n=m;
        }
    }
    for(i=0;i<20;i++)
    {
        for(j=0;j<17;j++)
        {
            m=1;
            for(k=j;k<j+4;k++)
            {
                m*=a[k][i];
            }
            if(n<m)
                n=m;
        }
    }
    for(i=16;i>=0;i--)
    {
        for(j=0;j<17;j++)
        {
            m=1;
            for(l=i,k=j;l<i+4,k<j+4;l++,k++)
            {
                m*=a[l][k];
            }
            if(n<m)
                n=m;
        }
    }
    for(i=16;i>=0;i--)
    {
        for(j=19;j>=3;j--)
        {
            m=1;
            for(l=i,k=j;l<i+4,k>j-4;l++,k--)
            {
                m*=a[l][k];
            }
            if(n<m)
                n=m;
        }
    }
    cout<<n;
    return 0;
}
