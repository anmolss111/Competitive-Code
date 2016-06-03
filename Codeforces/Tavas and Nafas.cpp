#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s;
    n=s;
    if(s==0)
    {
        cout<<"zero";
        return 0;
    }
    int a[2]={0};
    a[0]=s%10;
    n=s/10;
    a[1]=n%10;
    if(a[1]>=2||a[1]==0)
    {
        if(a[1]==2)
            cout<<"twenty";
        else if(a[1]==3)
            cout<<"thirty";
        else if(a[1]==4)
            cout<<"forty";
        else if(a[1]==5)
            cout<<"fifty";
        else if(a[1]==6)
            cout<<"sixty";
        else if(a[1]==7)
            cout<<"seventy";
        else if(a[1]==8)
            cout<<"eighty";
        else if(a[1]==9)
            cout<<"ninety";
        if(a[0]!=0&&a[1]!=0)
            cout<<"-";
        if(a[0]==1)
            cout<<"one";
        else if(a[0]==2)
            cout<<"two";
        else if(a[0]==3)
            cout<<"three";
        else if(a[0]==4)
            cout<<"four";
        else if(a[0]==5)
            cout<<"five";
        else if(a[0]==6)
            cout<<"six";
        else if(a[0]==7)
            cout<<"seven";
        else if(a[0]==8)
            cout<<"eight";
        else if(a[0]==9)
            cout<<"nine";
    }
    if(s==10)
        cout<<"ten";
    else if(s==11)
        cout<<"eleven";
    else if(s==12)
        cout<<"twelve";
    else if(s==13)
        cout<<"thirteen";
    else if(s==14)
        cout<<"fourteen";
    else if(s==15)
        cout<<"fifteen";
    else if(s==16)
        cout<<"sixteen";
    else if(s==17)
        cout<<"seventeen";
    else if(s==18)
        cout<<"eighteen";
    else if(s==19)
        cout<<"nineteen";
    return 0;
}
