#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string x,y[4];
    cin>>x;
    bool flag=true;
    int i,j=0,k,c=0;
    for(i=0;i<x.length();i++)
    {
        if(x[i]=='.')
            c++;
    }
    if(c!=3)
        flag=false;
    for(i=0;i<x.length();i++)
    {
        while(x[i]!='.')
        {
            y[j]=y[j]+x[i];
            i++;
        }
        j++;
        if(j==3)
            break;
    }
    for(j=i+1;j<x.length();j++)
    {
        y[3]=y[3]+x[j];
    }
    int a[4]={0};
    for(i=0;i<4;i++)
    {
        for(j=y[i].length()-1,k=0;j>=0;j--,k++)
        {
            int z=(y[i][j]-48);
            long int m=1;
            for(int l=0;l<k;l++)
                m=m*10;
            a[i]=a[i]+m*z;
        }
        if(a[i]>255)
            flag=false;
    }
    if(flag)
    {
        cout<<"Valid IP with class : ";
        if(a[0]<128)
            cout<<"A";
        else if(a[0]>127 && a[0]<192)
            cout<<"B";
        else if(a[0]>191 && a[0]<224)
            cout<<"C";
        else if(a[0]>223 && a[0]<240)
            cout<<"D";
        else if(a[0]>239 && a[0]<256)
            cout<<"E";
    }
    else
    {
        cout<<"Invalid IP address";
    }
}
