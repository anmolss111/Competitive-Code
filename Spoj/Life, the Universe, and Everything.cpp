#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int a[20],i=0;
    do
    {
        cin>>a[i];
        i++;
    }while(a[i-1]!=42);
    for(int j=0;j<i-1;j++)
    {
        cout<<a[j]<<"\n";
    }
    getch();
}
