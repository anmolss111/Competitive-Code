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
    cin>>n;
    int t[n],x[n];
    long int s1=0,s2=0,s;
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>x[i];
        s1=s1+t[i];
        s2=s2+x[i];
    }
    s=s1-s2+1;
    cout<<s<<endl;
    return 0;
}
