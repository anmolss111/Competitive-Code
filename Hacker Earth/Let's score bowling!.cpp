#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int fact[21]={0};
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int p,f=0;
        if(a==9)
        {
            p=10;
            f=1;
        }
        else if(a>6&&a<9)
            p=2;
        else if(a>0&&a<7)
            p=1;
        else
            p=0;
        if(f==0)
        {
           if(b==9)
           {
               p=p+10;
               f=1;
           }
            else if(b>6&&b<9)
                p=p+2;
            else if(b>0&&b<7)
                p=p+1;
        }
        if(f==0)
        {
            if(c==9)
           {
               p=p+10;
               f=1;
           }
            else if(c>6&&c<9)
                p=p+2;
            else if(c>0&&c<7)
                p=p+1;
        }
        if(b==9)
            p=p-3;
        else if(c==9)
        {
            p=p-6;
        }
        cout<<p<<endl;
    }
    return 0;
}
