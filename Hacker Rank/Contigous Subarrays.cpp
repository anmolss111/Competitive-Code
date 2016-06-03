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
        long int a[n];
        for(int x=0;x<n;x++)
            cin>>a[x];
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-j;k++)
            {
                for(m=k;m<=k+j;m++)
                {
                    cout<<a[m];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
