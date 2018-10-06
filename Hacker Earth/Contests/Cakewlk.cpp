#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long int n,i,m,a,j,b;
    string x,y,z;
    cin>>n;
    cin>>x;
    m=x.length();
    for(i=0;i<n-1;i++)
    {
        cin>>a>>y;
        b=y.length();
        for(j=a;j<(a+b);j++)
        {
            x[j]=y[j-a];
        }
        m=a+b;
    }
    for(i=0;i<m;i++)
    {
        cout<<x[i];
    }
    return 0;
}
