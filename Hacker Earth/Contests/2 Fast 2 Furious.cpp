#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long long int a,a1,d,m1,m2,i;
    int c=0;
    cin>>a;
    for(i=1;i<n;i++)
    {
        cin>>a1;
        d=a1-a;
        a=a1;
        if(c==0)
        {
            c=1;
            m1=d;
        }
        else if(m1<d)
        {
            m1=d;
        }
    }
    cin>>a;
    c=0;
    for(i=1;i<n;i++)
    {
        cin>>a1;
        d=a1-a;
        a=a1;
        if(c==0)
        {
            c=1;
            m2=d;
        }
        else if(m2<d)
        {
            m2=d;
        }
    }
    if(m1==m2)
        cout<<"Tie\n"<<endl;
    else if(m1>m2)
        cout<<"Dom\n"<<m1<<endl;
    else
        cout<<"Brian\n"<<m2<<endl;
}
