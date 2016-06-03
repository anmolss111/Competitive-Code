#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,i,n,j,k,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        cin>>n;
        int a[n];
        cin>>a[0];
        for(j=1;j<n;j++)
        {
            cin>>a[j];
            if(a[j]!=a[j-1]&&k==j-1)
                c--;
            if(a[j]!=a[j-1])
            {
                c=c+2;
                k=j;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
