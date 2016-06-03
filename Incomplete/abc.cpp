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
    long long int s;
    cin>>s;
    cout<<s;
    return 0;
}
