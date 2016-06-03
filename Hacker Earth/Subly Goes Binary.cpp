#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
#define m1 200
using namespace std;
int main()
{
    long int n,q,k,c,i,j;
    string x;
    cin>>n>>x>>q;
    while(q--)
    {
        cin>>k;
        c=0;
        for(i=0,j=n-i-1;i<n-k+1;i++,j--)
        {
            cout<<j<<endl;
            if(x[j]=='0'&&x[j-1]=='0')
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
