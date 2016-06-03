#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,i,temp,j;
    cin>>s;
    int a[s];
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    temp=a[s-1];
    for(i=s-2;i>=0;i--)
    {
        if(a[i]>temp)
            a[i+1]=a[i];
        else
            a[i+1]=temp;
        for(j=0;j<s;j++)
            cout<<a[j]<<" ";
        cout<<endl;
    }
    return 0;
}
