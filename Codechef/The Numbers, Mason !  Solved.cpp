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
        long int n,c=0,i,m=0;
        cin>>n;
        if(n%2==1)
            cout<<0<<endl;
        else
        {
            cout<<9;
            for(i=0;i<(n/2-1);i++)
                cout<<0;
            cout<<endl;
        }
    }
}
