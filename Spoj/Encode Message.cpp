#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int t,i,n;
    int c,j,l,m;
    string x,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        cin>>k>>x;
        int a[x.length()];
        c=k.length();
        int b[k.length()];
        for(j=0;j<c;j++)
        {
            b[j]=k[j]-48;
        }
        for(j=0,l=0,m=c-1;j<x.length();j++,l++,m--)
        {
            if(j%c==0)
            {
                l=0;
                m=c-1;
            }
            if((j/c)%2==0)
            {
                a[j]=b[l];
            }
            else if((j/c)%2==1)
            {
                a[j]=b[m];
            }
            n=x[j]-a[j];
            if(n<97)
                n=n+122-96;
            x[j]=n;
        }
        cout<<x<<endl;
    }
    return 0;
}
