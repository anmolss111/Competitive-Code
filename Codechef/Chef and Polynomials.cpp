#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,i,m,j;
        cin>>n;
        long long int a[n][2],x,y,a1;
        for(i=0;i<n;i++)
        {
            a[i][1]=i;
            cin>>m;
            a[i][0]=0;
            for(j=0;j<m;j++)
            {
                cin>>x>>y;
                a1=abs(x)+abs(y);
                if(a1>a[i][0])
                    a[i][0]=a1;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j][0]>a[j+1][0])
                {
                    swap(a[j][0],a[j+1][0]);
                    swap(a[j][1],a[j+1][1]);
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i][1]<<" ";
        cout<<endl;
    }
    return 0;
}
