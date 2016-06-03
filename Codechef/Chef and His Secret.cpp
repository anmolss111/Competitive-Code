#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i,j;
    string x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        fflush(stdin);
        getline(cin,x);
        for(j=0;j<x.length();j++)
        {
            if(x[j]>=97&&x[j]<=109)
                x[j]=x[j]+13;
            else if(x[j]>=110&&x[j]<=122)
                x[j]=x[j]-13;
            else if(x[j]>=65&&x[j]<=77)
                x[j]=x[j]+13;
            else if(x[j]>=78&&x[j]<=90)
                x[j]=x[j]-13;
            else if(x[j]>=110&&x[j]<=122)
                x[j]=x[j]-13;
            else if(x[j]>=48&&x[j]<=52)
                x[j]=x[j]+5;
            else if(x[j]>=53&&x[j]<=57)
                x[j]=x[j]-5;
        }
        cout<<x<<endl;
    }
    return 0;
}
