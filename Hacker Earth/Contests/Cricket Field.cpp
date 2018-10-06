#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int t,i,j,x,y,k;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int f=0;
        for(i=0,j=0,k=1;i<=abs(x)||j<=abs(y);k++)
        {
            if(k%4==1)
                i=i+k;
            else if(k%4==2)
                j=j+k;
            else if(k%4==3)
                i=i-k;
            else if(k%4==0)
                j=j-k;
            if(i==x&&j==y)
                f=1;
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
