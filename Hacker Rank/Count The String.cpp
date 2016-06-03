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
        string x;
        int n,k;
        cin>>n>>k;
        cin>>x;
        int a[26][2]={0},i,j;
        for(i=0;i<26;i++)
            a[i][1]=i;
        for(i=0;i<n;i++)
        {
            a[x[i]-97][0]++;
        }
        for(i=0;i<26;i++)
        {
            for(j=0;j<25-i;j++)
            {
                if(a[j][0]<a[j+1][0])
                {
                    swap(a[j][0],a[j+1][0]);
                    swap(a[j][1],a[j+1][1]);
                }
            }
        }
        bool flag=true;
        for(i=0;i<26;i++)
        {
            if(a[i][0]>k)
            {
                flag=false;
                cout<<char(a[i][1]+97);
            }
        }
        if(flag)
            cout<<"NONE";
        cout<<endl;
    }
    return 0;
}
