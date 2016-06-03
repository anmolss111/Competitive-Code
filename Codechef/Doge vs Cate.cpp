#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        long long int a[n][2],m;
        for(j=0;j<n;j++)
        {
            cin>>a[j][0];
            a[j][1]=0;
        }
        for(j=0;j<n;j++)
        {
            for(l=0;l<n;l++)
            {
                if(a[j][0]==a[l][0])
                    a[j][1]++;
            }
        }
        m=2000;
        for(j=0;j<n;j++)
        {
            if(abs(a[j][1]-k)<m)
            {
                m=abs(a[j][1]-k);
                if(m==0)
                    break;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
