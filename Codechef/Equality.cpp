#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        long int n,i;
        cin>>n;
        long long int a[n],s;
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        s=s/(n-1);
        for(i=0;i<n;i++)
        {
            cout<<s-a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
