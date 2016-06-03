#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,a,b[11];
    cin>>a;
    while(a!=0)
    {
        b[i]=a%2;
        a=a/2;
        i++;
    }
    for(int j=0;j<i;j++)
        cout<<b[i]<<endl;
    return 0;
}
