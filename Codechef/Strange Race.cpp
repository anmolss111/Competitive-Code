#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int n,i,q,p,r,t,j,c;
    cin>>n>>q;
    long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>t;
        if(t==1)
        {
            cin>>p>>r;
            p--;
            a[p]=r;
        }
        else if(t==2)
        {
            cin>>p>>r>>t;
            p--;
            r--;
            c=0;
            for(j=p;j<=r;j++)
            {
                if(a[j]<=t)
                    c++;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
