#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    fflush(stdin);
    string x;
    for(i=0;i<t+1;i++)
    {
        getline(cin,x);
        bool flag=false;
        int a[26]={0};
        for(j=0;j<x.length();j++)
        {
            if(x[j]>=97&&x[j]<=122)
                a[x[j]-97]++;
        }
        for(j=0;j<26;j++)
        {
            if(a[j]==0)
            {
                flag=true;
                break;
            }
        }
        for(j=0;j<25;j++)
        {
            if(a[j]!=a[j+1])
            {
                flag=true;
                break;
            }
        }
        if(i!=0)
        {
            if(flag)
                cout<<"No";
            else
                cout<<"Yes";
            cout<<endl;
        }
    }
    return 0;
}
