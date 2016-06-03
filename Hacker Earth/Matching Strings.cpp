#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i,c;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        c=0;
        for(i=0;i<a.length()&&i<b.length();i++)
        {
            if(a[i]==b[i])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
