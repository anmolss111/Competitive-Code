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
    char x[1000];
    gets(x);
    int b=0,i,a[26]={0};
    for(i=0;x[i]!='\0';i++)
    {
        x[i]=toupper(x[i]);
        if(x[i]!=' ')
            a[x[i]-65]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            b=1;
            cout<<"not pangram";
            break;
        }
    }
    if(b==0)
        cout<<"pangram";
    return 0;
}
