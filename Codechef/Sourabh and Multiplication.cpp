#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n,x,y,c,z;
    int t,i,k,j,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        c=0;
        x=n;
        int a[17]={0};
        j=0;
        while(x!=0)
        {
            a[j]=x%10;
            x=x/10;
            j++;
        }
        for(j=0;j<16;j++)
        {
            y=1;
            for(l=0;l<j;l++)
                y=y*10;
            if(a[j]==k)
                z=2*k;
            else
                z=a[j]*k;
            c=c+y*z;
        }
        c=c+n*k;
        cout<<c<<endl;
    }
    return 0;
}
