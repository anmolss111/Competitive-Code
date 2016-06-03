#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long int n,i,j;
    int f;
    long long int a;
    vector <long long int> v;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>a;
        f=0;
        for(i=0;i<v.size()/2;i++)
        {
            if(v[i]==a)
            {
                f=1;
                break;
            }
            if(v[v.size()-i-1]==a)
            {
                f=1;
                break;
            }
        }
        if(v.size()%2==1)
        {
            if(v[v.size()/2]==a)
                f=1;
        }
        if(f==0)
        {
            v.push_back(a);
            cout<<"ADDED"<<endl;
        }
        else
            cout<<"REDUNDANT"<<endl;
    }
    return 0;
}
