#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    string x,y;
    x="CODEFORCES";
    int n=x.length(),i,j,f=0;
    cin>>y;
    for(i=0,j=0;i<y.length();i++)
    {
        if(y[i]==x[j])
            j++;
        if(j==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
