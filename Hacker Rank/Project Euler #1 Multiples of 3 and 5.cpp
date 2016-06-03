#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,k,a,b,c,l;
    cin>>t;
    for(j=0;j<t;j++)
    {
        float s=0;
        cin>>n;
        i=n/3;
        k=n/5;
        l=n/15;
        int x=n%3,y=n%5,z=n%15;
        a=n-x;
        if(x==0)
        {
            a=a-3;
            i--;
        }
        b=n-y;
        if(y==0)
        {
            b=b-5;
            k--;
        }
        c=n-z;
        if(z==0)
        {
            c=c-15;
            l--;
        }
        s=s+((i)*(3+a))/2+((k)*(5+b))/2-((l)*(15+c))/2;
        cout<<s<<endl;
    }
    return 0;
}
