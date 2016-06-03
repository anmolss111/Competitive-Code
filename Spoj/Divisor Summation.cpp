#include<iostream>
#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int n,t,i;
    long long int c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=2;i<=n/i;i++)
        {
            if(n%i==0)
            {
                if(i!=n/i)
                {
                    c=c+n/i;
                }
                c=c+i;
            }
        }
        if(n!=1)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
