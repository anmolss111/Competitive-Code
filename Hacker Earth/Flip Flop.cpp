#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i,c;
    cin>>t;
    string x;
    while(t--)
    {
        cin>>x;
        c=0;
        for(i=0;i<x.length()-1;i++)
        {
            if(x[i]==x[i+1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
