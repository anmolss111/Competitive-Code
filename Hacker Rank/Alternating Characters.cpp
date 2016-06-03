#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    int t,i,j,n,k;
    string x;
    cin>>t;
    for(j=0;j<t;j++)
    {
        int c=0;
        cin>>x;
        for(i=1;i<x.length();i++)
        {
            if(x[i]==x[i-1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
