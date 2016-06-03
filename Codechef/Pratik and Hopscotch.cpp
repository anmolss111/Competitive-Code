#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n,k,t,i,x,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        x=n-k;
        x=x/2;
        x=x+1;
        if((n-k)%2==1)
            c=x*(k+n-1);
        else
            c=x*(k+n);
        cout<<c/2<<endl;
    }
    return 0;
}
