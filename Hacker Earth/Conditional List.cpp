#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long int t,l,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>l;
        int a[l];
        k=0;
        long int b[l];
        for(j=0;j<l;j++)
        {
            cin>>a[j];
            if(j==0)
                b[0]=a[0];
            else
                b[j]=b[j-1]+a[j];
        }
        for(j=1;j<l-1;j++)
        {
            if(b[j-1]==(b[l-1]-b[j]))
            {
                k=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(k==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
