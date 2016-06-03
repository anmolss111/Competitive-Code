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
        long int n,i,j;
        long long int x,s;
        bool flag=false;
        cin>>n>>x;
        long int c[n];
        s=0;
        j=0;
        for(i=0;i<n;i++)
        {
            cin>>c[i];
            s=s+c[i];
            while(s>x)
            {
                s=s-c[j];
                j++;
            }
            if(s==x)
                flag=true;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
