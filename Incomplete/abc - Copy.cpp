#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n,i;
    long int c=0;
    cin>>n;
    int a,b[n+n];
    for(i=0;i<n+n;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>a;
        b[a-1]++;
    }
    for(i=0;i<n+n-1;)
    {
        if(b[i]>1)
        {
            c=c+b[i]-1;
            b[i+1]=b[i+1]+(b[i]-1);
            b[i]=1;
        }
        if(b[i]==0||b[i]==1)
            i++;
    }
    cout<<c<<endl;
    return 0;
}
