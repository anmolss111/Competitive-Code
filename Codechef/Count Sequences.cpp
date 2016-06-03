#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long int Combinations(long long int n, long long int r)
{
    if(r==0&&n==0)
        return 1;
    if (r > n)
        return 0;

    long long v = n--;

    for (long long int i = 2; i < r + 1; ++i, --n)
        v =(v*n)/i;

    return v;
}
int main()
{
    int t,i;
    long long int n,l,r,c,j,k,a;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>l>>r;
        c=0;
        a=r-l+1;
        for(j=1;j<=n;j++)
        {
            c=(c+Combinations(a+j-1,j))%1000003;
        }
        cout<<c<<endl;
    }
    return 0;
}
