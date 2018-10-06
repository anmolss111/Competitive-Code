#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,u,o,c=0,i,j,k=0;
        cin>>l;
        for(i=0;i<2;i++)
        {
            for(j=1;j<l;j++)
            {
                cin>>u;
                o=u-l+j;
                if(o>0)
                {
                    if(k<o)
                        k=o;
                }
            }
        }
        c=c+l+k;
        cout<<c<<endl;
    }
    return 0;
}
