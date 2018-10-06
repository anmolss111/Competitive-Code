#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n,n1;
        long int b=0,r=0;
        cin>>n;
        int p[n];
        for(i=0;i<n;i++)
        {
            cin>>p[i];
        }
        n1=n-1;
        for(i=0;i<n;i++)
        {
            if(p[0]>=p[n1])
            {
                if(i%2==0)
                {
                    r=r+p[0];
                    for(j=1;j<n1;j++)
                    {
                        p[j-1]=p[j];
                    }
                }
                else
                    b=b+p[n1];
                n1--;
            }
            else
            {
                if(i%2==0)
                    r=r+p[n-1];
                else
                {
                    b=b+p[0];
                    for(j=1;j<n1;j++)
                    {
                        p[j-1]=p[j];
                    }
                }
                n1--;
            }
        }
        if(r>b)
            cout<<"Ravi "<<r<<endl;
        else if(r>b)
            cout<<"Abhinav "<<b<<endl;
        else
            cout<<"Tie "<<endl;
    }
    return 0;
}
