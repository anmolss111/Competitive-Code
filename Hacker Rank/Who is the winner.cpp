#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string x;
    cin>>x;
    long int a[26]={0},i;
    for(i=0;i<x.length();i++)
    {
        a[x[i]-97]++;
    }
    long int max=a[25],index=25;
    for(i=24;i>=0;i--)
    {
        if(max<=a[i])
        {
            max=a[i];
            index=i;
        }
    }
    char b=index+97;
    cout<<b;
    return 0;
}
