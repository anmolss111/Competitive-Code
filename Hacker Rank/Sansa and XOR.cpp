#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,n,j,k,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        long int a[n],b=0;
        for(int x=0;x<n;x++)
            cin>>a[x];
        if(n%2!=0)
            for(int j=0;j<n;j=j+2)
                b=a[j]^b;
        cout<<b<<endl;
    }
    return 0;
}
