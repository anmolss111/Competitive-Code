#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
                swap(a[j],a[j+1]);
            if(b[j]<b[j+1])
                swap(b[j],b[j+1]);
        }
    }
    for(i=0,j=0;i<n&&j<n;i++)
    {
        if(b[i]<a[j])
        {
            j++;
        }
    }
    cout<<j<<endl;
    }
    return 0;
}
