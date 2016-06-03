#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,i,s=0,m;
        bool flag=false;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a<2)
                flag=true;
            else
            {
                s=s+a;
                a=a-2;
                if(i==0)
                    m=a;
                if(a<m)
                    m=a;
            }
        }
        s=s-m;
        if(flag)
            cout<<-1<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
