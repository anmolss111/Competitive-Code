#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int fact[21]={0};
int main()
{
    int t,m,x,y,m1,i,j;
    cin>>t;
    while(t--)
    {
        cin>>m>>x>>y;
        int a[100]={0};
        for(i=0;i<m;i++)
        {
            cin>>m1;
            m1--;
            for(j=0;j<=x*y;j++)
            {
                if((m1-j)>=0)
                    a[m1-j]=1;
                if((m1+j)<100)
                    a[m1+j]=1;
            }
        }
        int c=0;
        for(i=0;i<100;i++)
        {
            if(a[i]==0)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
