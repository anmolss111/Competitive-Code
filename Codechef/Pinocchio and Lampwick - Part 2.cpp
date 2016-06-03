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
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
        {
            c=0;
            while(a[i]==a[i-1]&&i<n)
            {
                c++;
                i++;
            }
            if(c>m)
                m=c;
        }
        cout<<m<<endl;
    }
}
