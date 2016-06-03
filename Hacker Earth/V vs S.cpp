#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        int i,j,k;
        cin>>x;
        int a[600]={0},b,c=0,d[2],a1=x.length();
        for(i=a1-1;i>=0;i--)
        {
            a[i]=x[i]-48;
        }
        for(i=1;i<a1;i=i+2)
        {
            b=a[i-1]+a[i];
            while(b>9)
            {
                d[0]=b%10;
                d[1]=1;
                b=d[0]+d[1];
            }
            c=c+b;
            while(c>9)
            {
                d[0]=c%10;
                d[1]=1;
                c=d[0]+d[1];
            }
        }
        if(a1%2==1)
        {
            c=c+a[a1-1];
            while(c>9)
            {
                d[0]=c%10;
                d[1]=1;
                c=d[0]+d[1];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
