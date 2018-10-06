#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,i,m,j,k,l;
    cin>>n;
    int a[n];
	for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>i>>j>>k;
        i--;
        j--;
        for(l=i;l<=j;l++)
            a[l]=a[l]+k;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
