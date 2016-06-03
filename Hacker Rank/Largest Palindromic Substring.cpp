#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,c;
    string x;
    cin>>x;
    for(i=0;i<x.length();i++)
    {
        for(j=0;j<=i;j++)
        {
            c=0;
            int a[26]={0};
            for(k=j;k<x.length()-i;k++)
            {
                a[x[k]-97]++;
            }
            for(k=0;k<26;k++)
            {
                if(a[k]%2==1)
                    c++;
            }
            if((c==0)&&((x.length()-i-j)%2==0)&&x[j]==x[x.length()-i-1])
            {
                for(k=j;k<x.length()-i;k++)
                {
                    cout<<x[k];
                }
                return 0;
            }
            else if((c==1)&&((x.length()-i-j)%2==1)&&x[j]==x[x.length()-i-1])
            {
                for(k=j;k<x.length()-i;k++)
                {
                    cout<<x[k];
                }
                return 0;
            }
        }
    }
}
