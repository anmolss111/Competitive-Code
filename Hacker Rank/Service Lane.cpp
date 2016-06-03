#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,i,j,c;
    int t,b;
    cin>>n>>t;
    int w[n];
    for(a=0;a<n;a++)
        cin>>w[a];
    for(b=0;b<t;b++)
    {
        int m=4;
        cin>>i>>j;
        for(c=i;c<=j;c++)
        {
            if(w[c]<m)
                m=w[c];
        }
        cout<<m<<endl;
    }
    return 0;
}
