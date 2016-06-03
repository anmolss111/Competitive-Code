#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
long int root(uint64_t x)
{
    uint64_t a;
    long int i;
    for(i=1;;i++)
    {
        a=pow(2,i);
        if(((2*(a-1)-i)+1)>x)
        {
            break;
        }
    }
    return i;
}
uint64_t intern(uint64_t x)
{
    return ((log(x))/(log(2)));
}
int main()
{
    long long t;
    cin>>t;
    long int s[t];
    for(long long i1=0;i1<t;i1++)
    {
        s[i1]=0;
        uint64_t x,y,a,b,k,l;
        cin>>x;
        cin>>y;
        long int i,j;
        i=root(x);
        j=root(y);
        i--;
        j--;
        a=pow(2,i);
        k=x-((2*(a-1)-i)+1)+1;
        b=pow(2,j);
        l=y-((2*(b-1)-j)+1)+1;
        s[i1]=abs(j-i);
        s[i1]=s[i1]+intern(l);
        s[i1]=s[i1]+intern(k);
    }
    for(long long i1=0;i1<t;i1++)
    {
        cout<<s[i1]<<endl;
    }
    return 0;
}
