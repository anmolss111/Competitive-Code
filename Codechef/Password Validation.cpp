#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int c[4]={0},i;
    string x;
    cin>>x;
    c[0]=x.length();
    for(i=0;i<c[0];i++)
    {
        if(x[i]>=65&&x[i]<=90)
            c[1]++;
        else if(x[i]>=97&&x[i]<=122)
            c[2]++;
        else if(x[i]>=48&&x[i]<=57)
            c[3]++;
    }
    if(c[0]>=5&&c[1]!=0&&c[2]!=0&&c[3]!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
