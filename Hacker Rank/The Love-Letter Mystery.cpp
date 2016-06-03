#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,i,j,k,a,b;
    cin>>t;
    char x[10000];
    for(j=0;j<t;j++)
    {
        int c=0;
        cin>>x;
        int n=strlen(x);
        for(i=0,k=n-1;i<n/2;i++,k--)
        {
            a=x[i];
            b=x[k];
            while(a!=b)
            {
                if(a>b)
                {
                    a--;
                    c++;
                }
                else
                {
                    b--;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
