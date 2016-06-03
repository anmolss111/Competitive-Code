#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,k;
    cin>>t;
    for(j=0;j<t;j++)
    {
        int c=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
                c++;
        }
        if(c>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
