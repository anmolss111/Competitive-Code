#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    string x;
	while(t--)
    {
        cin>>x;
        int a[26]={0},f=0;
        for(i=0;i<x.length();i++)
        {
            a[x[i]-97]++;
            if(a[x[i]-97]>1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
