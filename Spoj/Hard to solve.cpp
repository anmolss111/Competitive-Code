#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j,x,k,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        k=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cin>>x;
        for(j=0;j<=n/2;j++)
        {
            if(a[j]==x||a[n-j-1]==x)
            {
                k=1;
                break;
            }
        }
        cout<<"Case "<<i+1<<": ";
        if(k==0)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
    return 0;
}
