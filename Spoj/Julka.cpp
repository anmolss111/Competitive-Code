#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    for(int t=0;t<10;t++)
    {
        string x,y,z;
        int i,j,k;
        cin>>x>>y;
        int a[101]={0},b[101]={0},c[102]={0},d[102]={0},a1=x.length(),b1=y.length();
        for(i=a1-1,j=0;i>=0;i--,j++)
        {
            a[j]=x[i]-48;
        }
        for(i=b1-1,j=0;i>=0;i--,j++)
        {
            b[j]=y[i]-48;
        }
        for(i=0;i<a1;i++)
        {
            c[i]=c[i]+a[i]+b[i];
            if(c[i]>=10)
            {
                c[i]=c[i]%10;
                c[i+1]++;
            }
        }
        for(i=a1;i>=0;i--)
        {
            if(c[i]%2==1)
            {
                c[i-1]=10+c[i-1];
            }
            c[i]=c[i]/2;
        }
        for(i=0;i<=a1;i++)
        {
            d[i]=d[i]+a[i]-c[i];
            if(d[i]<0)
            {
                d[i]=d[i]+10;
                d[i+1]--;
            }
        }
        for(i=a1;i>=0;i--)
        {
            if(c[i]!=0)
                break;
        }
        for(j=i;j>=0;j--)
            cout<<c[j];
        cout<<endl;
        for(i=a1;i>=0;i--)
        {
            if(d[i]!=0)
                break;
        }
        for(j=i;j>=0;j--)
            cout<<d[j];
        cout<<endl;
    }
    return 0;
}
