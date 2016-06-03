#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[m],b[k],c[n],d[n],e[2]={0};
        for(i=0;i<n;i++)
        {
            c[i]=0;
            d[i]=0;
        }
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            c[a[i]-1]=1;
        }
        for(i=0;i<k;i++)
        {
            cin>>b[i];
            d[b[i]-1]=1;
        }
        for(i=0;i<n;i++)
        {
            if(c[i]==1&&d[i]==1)
                e[0]++;
            else if(c[i]==0&&d[i]==0)
                e[1]++;
        }
        cout<<e[0]<<" "<<e[1]<<endl;
    }
    return 0;
}
