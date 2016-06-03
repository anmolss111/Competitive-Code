#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int sortall(double p[],int x[],int y[],double d[],int a,int b)
{
    int i,j;
    for(i=b;i>=a;i--)
    {
        for(j=a;j<i;j++)
        {
            if(p[j]>p[j+1])
            {
                swap(p[j],p[j+1]);
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
                swap(d[j],d[j+1]);
            }
        }
    }
    return 0;
}
int main()
{
    int n,i,j;
    cin>>n;
    int x[n],y[n];
    double p[n],d[n],t[4];
    const float pi=atan(1)*4;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        if(x[i]!=0)
        {
            t[0]=y[i]/x[i];
            p[i]=atan(t[0]);
            if(x[i]<0)
                p[i]=p[i]+pi;
            if(x[i]>0&&y[i]<0)
                p[i]=p[i]+2*pi;
            t[1]=pow(x[i],2);
            t[2]=pow(y[i],2);
            t[3]=t[1]+t[2];
            d[i]=sqrt(t[3]);
        }
        else
        {
            if(y[i]>0)
                p[i]=pi/2;
            else
                p[i]=3*pi/2;
            d[i]=abs(y[i]);
        }
        cout<<x[i]<<" "<<y[i]<<" "<<d[i]<<" "<<p[i]<<endl;
    }
    sortall(p,x,y,d,0,n-1);
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if(p[j]!=p[j+1])
            {
                break;
            }
        }
        if(j!=i)
        {
            sortall(d,x,y,p,i,j);
        }
    }
    for(i=0;i<n;i++)
        cout<<x[i]<<" "<<y[i]<<endl;
    return 0;
}
