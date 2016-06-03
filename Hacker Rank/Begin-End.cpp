#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    string x;
    cin>>x;
    long int a[26]={0},i;
    long long int c=0;
    for(i=0;i<n;i++)
        a[x[i]-97]++;
    for(i=0;i<n;i++)
    {
        c=c+a[x[i]-97];
        a[x[i]-97]--;
    }
    cout<<c<<endl;
    return 0;
}
