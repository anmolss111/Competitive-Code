#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int s[t],n,i,j;
    for(j=0;j<t;j++)
    {
        cin>>n;
        s[j]=1;
        if(n!=0)
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                    s[j]=2*s[j];
                else
                    s[j]++;
            }
        }
    }
    for(i=0;i<t;i++)
        cout<<s[i]<<endl;
    return 0;
}
