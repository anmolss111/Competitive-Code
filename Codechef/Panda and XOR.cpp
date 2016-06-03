#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    long int n,i;
    long long int m=0,t=0,c=0;
    cin>>n;
    int a[n],b[128]={0};
    for(i=0;i<n;i++)
        cin>>a[i];
    for (int s = 1; s < (1 << n); ++s)
    {
        m=0;
        for (int e = 0; e < n; ++e)
        {
            if (s & (1 << e))
            {
                m=(m^a[e]);
            }
        }
        b[m]++;
    }
    for(i=0;i<128;i++)
    {
        b[i]=(((b[i])%(1000000007))*((b[i]-1)%(1000000007)))%(1000000007);
        b[i]=b[i]/2;
        c=((c%(1000000007))+b[i])%(1000000007);
    }
    cout<<c;
    return 0;
}
