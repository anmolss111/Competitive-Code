#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i,s,c,d,j;
    string x;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>s;
        cin>>x;
        d=0;
        c=0;
        int a[s+1];
        for(i=0;i<x.length();i++)
            a[i]=x[i]-48;
        c=a[0];
        for(i=0;i<s;i++)
        {
            if(c<i+1)
            {
                cout<<"A";
                d=d+i-c;
                c=c+d;
            }
            c=c+a[i];
        }
        cout<<"Case #"<<j+1<<": "<<d<<endl;
    }
    return 0;
}
