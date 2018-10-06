#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,j;
    long int n,p,x;
    bool flag;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int c=0;
        flag=false;
        cin>>n;
        for(long int j=0;j<n;j++)
        {
            cin>>x;
            if(x==p)
                flag=true;
            if(x>p)
                c++;
        }
        if(flag)
            cout<<"YES "<<c<<endl;
        else
            cout<<"NO 0"<<endl;
    }
    return 0;
}
