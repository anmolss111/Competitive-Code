#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,s[2],r[2];
    long int n;
    cin>>t;
    int w[t];
    for(i=0;i<t;i++)
    {
        s[1]=0;
        r[1]=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s[0];
            cin>>r[0];
            s[1]=s[1]+s[0];
            r[1]=r[1]+r[0];
        }
        if(s[1]>r[1])
        {
            w[i]=0;
        }
        else if(s[1]<r[1])
        {
            w[i]=1;
        }
        else
        {
            w[i]=2;
        }
    }
    for(i=0;i<t;i++)
    {
        if(w[i]==0)
        {
            cout<<"Sahil\n";
        }
        else if(w[i]==1)
        {
            cout<<"Roshesh\n";
        }
        else if(w[i]==2)
        {
            cout<<"Draw\n";
        }
    }
    return 0;
}
