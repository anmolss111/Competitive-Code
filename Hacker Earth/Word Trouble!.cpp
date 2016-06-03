#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string x,y;
    while(t--)
    {
        cin>>x>>y;
        int m=min(x.length(),y.length()),c=0,i;
        for(i=0;i<m;i++)
        {
            if(x[i]!=y[i])
            {
                c++;
            }
        }
        if(x.length()!=y.length())
        {
            c=c+abs(x.length()-y.length());
        }
        if(c==0)
        {
            cout<<"Exact"<<endl;
        }
        else
        {
            cout<<"Non Exact "<<c<<endl;
        }
    }
    return 0;
}
