#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int c={0};
        for(i=1;i<a.length();i++)
        {
            if(a[i-1]=='0'&&a[i]=='1')
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
