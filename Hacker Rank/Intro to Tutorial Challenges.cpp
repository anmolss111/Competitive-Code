#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,i,n,j;
    cin>>v;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==v)
            j=i;
    }
    cout<<j;
    return 0;
}
