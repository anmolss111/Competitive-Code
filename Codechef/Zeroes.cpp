#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int t,n,c,d,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=0;
        for(i=1;i<=n;i++)
        {
            x=i;
            c=0;
            while(x%5==0)
            {
                c++;
                x=x/5;
            }
            c=c*i;
            d=d+c;
        }
        cout<<d<<endl;
    }
    return 0;
}
