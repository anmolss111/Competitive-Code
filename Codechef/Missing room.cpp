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
    long int n,j,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a,b[n];
        for(i=0;i<n;i++)
            b[i]=0;
        for(i=0;i<n-1;i++)
        {
            cin>>a;
            a--;
            b[a]=1;
        }
        for(i=0;i<n;i++)
            if(b[i]==0)
            {
                cout<<i+1<<endl;
                break;
            }
    }
    return 0;
}
