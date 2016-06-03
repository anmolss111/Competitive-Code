#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int i,c,t,n;
    cin>>t;
    char x[101];
    while(t--)
    {
        fflush(stdin);
        gets(x);
        c=0;
        n=0;
        for(i=0;x[i]!=0;i++)
        {
            n++;
            if(x[i]==' ')
                c++;
        }
        if(c==0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<x[0]<<". ";
            for(i=1;i<n-1;i++)
            {
                if(x[i]==' ')
                {
                    c--;
                    if(c==0)
                    {
                        for(i=i+1;i<n;i++)
                            cout<<x[i];
                    }
                    else
                        cout<<x[i+1]<<". ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
