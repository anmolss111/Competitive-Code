#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool isprime(long long int n)
{
    if(n==1)
        return false;
    else if(n%2==0&&n!=2)
        return false;
    else
    {
        for(int i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
                return false;
        }
    }
    return true;
}
int main()
{
	int t;
	cin>>t;
	long long int m,n,j;
	for(int i=0;i<t;i++)
    {
        cin>>m>>n;
        for(j=m;j<=n;j++)
        {
            if(isprime(j))
                cout<<j<<endl;
        }
    }
    return 0;
}
