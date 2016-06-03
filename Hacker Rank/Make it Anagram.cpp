#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    int i,j,c=0;
    int a[26][2];
    for(i=0;i<26;i++)
        for(j=0;j<2;j++)
            a[i][j]=0;
    string x[2];
    for(j=0;j<2;j++)
    {
        cin>>x[j];
        for(i=0;i<x[j].length();i++)
        {
            x[j][i]=tolower(x[j][i]);
            a[x[j][i]-97][j]++;
        }
    }
    for(i=0;i<26;i++)
    {
        c+=abs(a[i][1]-a[i][0]);
    }
    cout<<c;
    return 0;
}

