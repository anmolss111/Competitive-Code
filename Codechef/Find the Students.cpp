#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    long int x[n],y[n],t;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        y[i]=x[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(y[j]>y[j+1])
                swap(y[j],y[j+1]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(y[i]>0)
        {
            t=y[i];
            for(j=0;j<n;j++)
            {
                x[j]=x[j]-t;
                if(x[j]>0)
                    cout<<x[j]<<" ";
                if(j>=i)
                {
                    y[j]=y[j]-t;
                }
            }
            cout<<endl;
            if(y[n-1]<0)
            {
                break;
            }
        }
    }
    return 0;
}
