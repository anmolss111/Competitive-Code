#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
#define m1 200
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        float s=0,o,a;
        o=180*(n-2);
        for(i=0;i<n;i++)
        {
            cin>>a;
            s=s+a;
        }
        if(s!=o||n==1||n==2||s<0)
            cout<<"No"<<endl;
        else if(s==o)
            cout<<"Yes"<<endl;
    }
    return 0;
}
