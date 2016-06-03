#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<(n/2);i++)
        {
            cout<<i<<" "<<n-i<<endl;
            cout<<n-i<<" "<<i<<endl;
        }
        if(n%2==0)
            cout<<n/2<<" "<<n/2<<endl;
        else
        {
            cout<<n/2<<" "<<n-n/2<<endl;
            cout<<n-n/2<<" "<<n/2<<endl;
        }
    }
    return 0;
}
