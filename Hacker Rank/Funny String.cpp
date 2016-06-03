#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i,n,a,b,c,j;
    string x,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x;
        y=x;
        c=0;
        n=x.length();
        for(j=0;j<n/2;j++)
            swap(y[j],y[n-j-1]);
        for(j=1;j<n;j++)
        {
            a=abs(x[j]-x[j-1]);
            b=abs(y[j]-y[j-1]);
            if(a!=b)
            {
                c=1;
                cout<<"Not Funny"<<endl;
                break;
            }
        }
        if(c==0)
            cout<<"Funny"<<endl;
    }
    return 0;
}
