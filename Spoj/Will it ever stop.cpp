#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
            break;
    }
    if(n==1)
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
    return 0;
}
