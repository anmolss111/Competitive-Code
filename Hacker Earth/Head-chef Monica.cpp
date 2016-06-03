#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long int n,i,j,q;
    cin>>n;
	string x;
	cin>>x;
	long int a[7]={0};
	for(i=0;i<n;i++)
    {
        if(x[i]=='V')
            a[0]++;
        else if(x[i]=='N')
            a[1]++;
        else if(x[i]=='G')
            a[2]++;
        else if(x[i]=='T')
            a[3]++;
        else if(x[i]=='S')
            a[4]++;
        else if(x[i]=='B')
            a[5]++;
        else if(x[i]=='P')
            a[6]++;
    }
    cin>>q;
    string y;
    long long int m;
    for(i=0;i<q;i++)
    {
        cin>>y;
        if(y[0]=='V')
            m=a[0];
        else
            m=a[1];
        if(y[1]=='G')
            m=(m*a[2])%1000000007;
        else
            m=(m*a[3])%1000000007;
        if(y[2]=='S')
            m=(m*a[4])%1000000007;
        else if(y[2]=='B')
            m=(m*a[5])%1000000007;
        else
            m=(m*a[6])%1000000007;
        if(m!=0)
        {
        if(y[0]=='V')
        {
            a[0]--;
            if(a[0]<0)
                a[0]=0;
        }
        else
        {
            a[1]--;
            if(a[1]<0)
                a[1]=0;
        }
        if(y[1]=='G')
        {
            a[2]--;
            if(a[2]<0)
                a[2]=0;
        }
        else
        {
            a[3]--;
            if(a[3]<0)
                a[3]=0;
        }
        if(y[2]=='S')
        {
            a[4]--;
            if(a[4]<0)
                a[4]=0;
        }
        else if(y[2]=='B')
        {
            a[5]--;
            if(a[5]<0)
                a[5]=0;
        }
        else
        {
            a[6]--;
            if(a[6]<0)
                a[6]=0;
        }
        }
        cout<<m<<endl;
    }
    return 0;
}
