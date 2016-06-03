#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int t,a,b,c,y,x,j,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        x=0;
        j=0;
        for(y=0;y<=(c/b);y++)
        {
            x=c-y*b;
            if(x%a==0)
            {
                j=1;
                break;
            }
        }
        x=c/a;
        for(y=1;x>=(c/a)&&j==0;y++)
        {
            x=c+y*b;
            if(x%a==0)
            {
                j=1;
                break;
            }
        }
        if(j==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
