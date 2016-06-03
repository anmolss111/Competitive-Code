#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    long int n,j,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=0;
        j=n;
        while(j!=0)
        {
            if(j%2==0)
                i++;
            else
                break;
            j=j/2;
        }
        cout<<i<<endl;
    }
    return 0;
}
