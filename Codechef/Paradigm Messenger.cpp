#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i,j;
    int c;
    string x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x;
        c=0;
        for(j=0;j<x.length();j++)
        {
            c=c+x[j]-64;
        }
        cout<<c<<endl;
    }
    return 0;
}
