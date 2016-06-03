#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26],i,n,c=0;
    for(i=0;i<26;i++)
        a[i]=0;
    n=s.length();
    for(i=0;i<n;i++)
        a[s[i]-97]++;
    for(i=0;i<26;i++)
    {
        if(a[i]%2!=0)
            c++;
    }
    if(n%2==0&&c==0)
        cout<<"YES";
    else if(n%2!=0&&c==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
