#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long int n,i,m,j;
        cin>>n;
        long int a[n];
        m=0;
        for(i=0;;i++)
        {
            if(((i*(i+1))/2)>=n)
                break;
        }
        j=i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]=a[i]-j;
            if(m<a[i])
            {
                m=a[i];
            }
        }
        cout<<j+m+1<<endl;
    }
    return 0;
}
