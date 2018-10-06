#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string z[51];
string rever(string x)
{
    int n=x.length(),i;
    for(i=0;i<n/2;i++)
        swap(x[i],x[n-i-1]);
    return x;
}
string ti(string x[],int i)
{
    if(i==0)
    {
        z[i]=x[i];
        return z[i];
    }
    z[i]=z[i-1]+rever(z[i-1])+x[i];
    return z[i];
}
int main()
{
    int n,i,t,m,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string x[n];
        for(i=0;i<n;i++)
        {
            cin>>x[i];
            ti(x,i);
        }
        for(i=0;i<m;i++)
        {
            cin>>j;
            cout<<z[n-1][j];
        }
        cout<<endl;
    }
    return 0;
}
