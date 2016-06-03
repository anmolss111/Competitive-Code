#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long int t,i,j,k;
    string x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int a[11]={0},b[27]={0};
        for(i=0;i<x.length();i++)
        {
            if(x[i]>=48&&x[i]<=57)
                a[x[i]-48]++;
            else
                b[x[i]-97]++;
        }
        for(i=0,j=0,k=0;i<x.length();)
        {
            if(x[i]>=48&&x[i]<=57)
            {
                if(a[j]==0)
                    j++;
                else if(a[j]!=0)
                {
                    cout<<j;
                    a[j]--;
                    i++;
                }
            }
            else
            {
                if(b[k]==0)
                    k++;
                else if(b[k]!=0)
                {
                    char y=k+97;
                    cout<<y;
                    b[k]--;
                    i++;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
