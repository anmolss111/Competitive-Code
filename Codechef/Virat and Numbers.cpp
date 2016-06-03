#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n,i;
    long long int m,c;
    cin>>n;
    int elems[n];
    for(i=0;i<n;i++)
        cin>>elems[i];
    c=elems[0];
    for (int s = 1; s < (1 << n); ++s)
    {
        cout<<s<<endl;
        m=1;
        for (int e = 0; e < n; ++e)
        {
            if (s & (1 << e))
            {
               m=m*elems[e];
            }
        }
        if(m<c)
            c=m;
    }
    cout<<c<<endl;
    return 0;
}
