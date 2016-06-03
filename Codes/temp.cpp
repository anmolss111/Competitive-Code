#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<time.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    long int n,i;
    cin>>n;
    long int a[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for (i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
