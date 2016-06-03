#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i,c;
    string x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        c=0;
        int a[26]={0};
        for(i=0;i<x.length();i++)
        {
            a[x[i]-97]++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]%2==1)
                c++;
        }
        if(c!=0)
            cout<<c-1<<endl;
        else
            cout<<c<<endl;

    }
    return 0;
}
