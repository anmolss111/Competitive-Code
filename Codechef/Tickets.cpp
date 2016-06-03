#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i,f,n,j;
    cin>>t;
    string x;
	while(t--)
    {
        cin>>x;
        f=0;
        n=x.length();
        for(i=n-1;i>=2;i=i-2)
        {
            if(x[i]!=x[i-2])
            {
                f=1;
                break;
            }
        }
        for(j=n-2;j>=2;j=j-2)
        {
            if(x[j]!=x[j-2])
            {
                f=1;
                break;
            }
        }
        if(x[0]==x[1])
            f=1;
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
