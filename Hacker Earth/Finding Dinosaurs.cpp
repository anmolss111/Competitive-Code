#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long int n,k,l,q,i,j,m,d,c;
    int f;
    cin>>n>>k>>l>>q;
	string x[n];
	long int a[n],b;
	for(i=0;i<n;i++)
    {
        a[i]=0;
        cin>>x[i];
        for(j=0;j<k;j++)
        {
            cin>>b;
            m=1;
            for(d=0;d<j;d++)
                m=m*100;
            a[i]=a[i]+b*m;
        }
    }
    for(i=0;i<q;i++)
    {
        c=0;
        f=0;
        for(j=0;j<k;j++)
        {
            cin>>b;
            m=1;
            for(d=0;d<j;d++)
                m=m*100;
            c=c+b*m;
        }
        for(j=0;j<n/2;j++)
        {
            if(c==a[j])
            {
                f=1;
                break;
            }
            if(c==a[n-j-1])
            {
                f=1;
                j=n-j-1;
                break;
            }
        }
        if(c==a[n/2])
        {
            f=1;
            j=n/2;
        }
        if(f==1)
            cout<<x[j]<<endl;
        else
            cout<<"You cant fool me :P"<<endl;
    }
    return 0;
}
