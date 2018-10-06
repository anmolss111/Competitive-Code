#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<ctype.h>
using namespace std;
int main()
{
    int n,i,c;
    cin>>n;
    int64_t a[n],m,d=0,f;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(int s=0;s<(1<<n);++s)
    {
        c=0;
        m=1;
        for(int e=0;e<n;e++)
        {
            if(s & (1<<e))
            {
                c++;
                m=m*a[e];
                if(c>2)
                    break;
            }
        }
        if(c==2)
        {
            if(d==0)
                f=m;
            if(m>f)
                f=m;
            d++;
        }
    }
    cout<<f;
    return 0;
}
