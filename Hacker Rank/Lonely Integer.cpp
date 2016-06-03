#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        cin>>a[i][0];
        a[i][1]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][0]==a[j][0]&&i!=j)
                {
                    a[i][1]++;
                }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i][1]==0)
            cout<<a[i][0];
    }
    return 0;
}
