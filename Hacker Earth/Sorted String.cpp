#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    string x;
    while(t--)
    {
        cin>>x;
        int a[26]={0},b[26];
        for(i=0;i<x.length();i++)
            a[x[i]-97]++;
        for(i=0;i<26;i++)
            b[i]=i;
        for(i=0;i<25;i++)
        {
            for(j=0;j<(25-i);j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    swap(b[j],b[j+1]);
                }
            }
        }
        for(i=0;i<26;)
        {
            if(a[i]!=0)
            {
                cout<<char(b[i]+97);
                a[i]--;
            }
            else
                i++;
        }
        cout<<endl;
    }
    return 0;
}
