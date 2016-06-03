#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string x;
    int i,c,n,t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        c=0;
        n=x.length();
        for(i=0;i<n/2;i++)
        {
            if(x[i]!=x[n-i-1])
            {
                c=c+abs(x[i]-x[n-i-1]);
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
