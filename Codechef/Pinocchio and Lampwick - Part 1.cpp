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
        long int n,c=0,i;
        cin>>n;
        long int a[n];
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=a[i-1])
                c++;
        }
        cout<<c<<endl;
    }
}
