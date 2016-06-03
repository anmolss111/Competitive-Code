#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long int t,i,k,m,c,j,d,y;
    string x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>k>>m;
        cin>>x;
        int a[1000]={0};
        for(j=0;x[j]!='\0';j++)
        {
            a[j]=x[j]-48;
            c=0;
            for(y=0;y<=j;y++)
            {
                d=pow(k,j-y)*a[y];
                c=c+d;
            }
            cout<<c%m<<" ";
        }
        cout<<endl;
    }
    return 0;
}
