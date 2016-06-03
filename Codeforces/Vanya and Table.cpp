#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int b,x[2],y[2],i,j;
    int a[100][100]={0};
    cin>>b;
    while(b--)
    {
        cin>>x[0]>>y[0]>>x[1]>>y[1];
        x[0]--;
        x[1]--;
        y[0]--;
        y[1]--;
        for(i=x[0];i<=x[1];i++)
        {
            for(j=y[0];j<=y[1];j++)
            {
                a[i][j]++;
            }
        }
    }
    long long int c=0;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            c=c+a[i][j];
        }
    }
    cout<<c<<endl;
    return 0;
}
