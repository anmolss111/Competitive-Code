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
        long int n,x,i,c=0;
        cin>>n>>x;
        string y;
        cin>>y;
        for(i=0;i<n;i++)
        {
            if(y[i]=='B')
                c++;
        }
        if(c%2==0)
            cout<<x<<endl;
        else
            cout<<-1*x<<endl;
    }
    return 0;
}
