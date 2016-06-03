#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    while(s!=0)
    {
        s=0;
        int m=1000;
        for(i=0;i<n;i++)
        {
            if(a[i]<m&&a[i]!=0)
                m=a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                a[i]=a[i]-m;
                s++;
            }
        }
        if(s!=0)
            cout<<s<<endl;
    }
    return 0;
}
