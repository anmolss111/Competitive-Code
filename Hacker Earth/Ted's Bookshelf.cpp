#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n],w[n],i,j,c=0,f=0;
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>w[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(w[j]<w[j+1])
            {
                swap(w[j],w[j+1]);
                swap(t[j],t[j+1]);
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        c=c+t[i];
        if(c>=w[i+1])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        c=c+t[i];
    }
    cout<<c<<endl;
    return 0;
}
