#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,a,i,d=0;
        int b,c;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a;
            b=a%k;
            c=k-b;
            if(a<k)
                b=c;
            d=d+min(b,c);
        }
        cout<<d<<endl;
    }
    return 0;
}
