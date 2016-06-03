#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[101]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=0;i<101;i++)
        if(b[i]==1)
            cout<<i<<endl;
}
