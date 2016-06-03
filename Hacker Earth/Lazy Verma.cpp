#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long int n,m,c=0,d,e=0,i;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c=c+a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[m];
        d=c*b[m];
        e=e+d;
    }
    cout<<e<<endl;
    return 0;
}
