#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long int n,q,i,l,r,j;
    long long int s=0;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
            a[i]=-a[i];
        s=s+a[i];
    }
    for(j=0;j<q;j++)
    {
        long long int s1=0;
        cin>>l>>r;
        l--;
        r--;
        if(r-l<=(n/2))
        {
            for(i=l;i<=r;i++)
                s1=s1+a[i];
        }
        else
        {
            for(i=0;i<l;i++)
                s1=s1+a[i];
            for(i=r+1;i<n;i++)
                s1=s1+a[i];

            s1=s-s1;
        }
        if(s1%2==0)
            cout<<"Even"<<endl;
        else
            cout<<"Odd"<<endl;
    }
    return 0;
}
