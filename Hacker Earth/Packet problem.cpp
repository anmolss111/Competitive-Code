#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,c,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>m;
        int a[2]={0},d=0;
        int x[200000]={0},y[200000]={0};
        x[0]=1;
        c=1;
        while(m--)
        {
            for(i=0,j=0;i<c;i++)
            {
                if(x[i]==2)
                {
                    y[j]=2;
                    y[j+1]=1;
                    j=j+2;
                }
                else
                {
                    y[j]=2;
                    j++;
                }
            }
            c=j;
            for(i=0;i<c;i++)
                x[i]=y[i];
        }
        for(i=0;i<c;i++)
        {
            if(y[i]==1)
                a[0]++;
            else if(y[i]==2)
                a[1]++;
        }
        cout<<a[0]<<" "<<a[1]<<endl;
    }
    return 0;
}
