#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,n,i,a,d,j,s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        j=0;
        for(a=0;a<n;a++)
        {
            s=0;
            for(d=1;s<n;d++)
            {
                s=6*a+45*d;
                if(j==0&&s==n)
                {
                    j=1;
                    cout<<"CORRECT"<<endl;
                    break;
                }
            }
            if(j==1)
                break;
        }
        if(j==0)
        {
            cout<<"INCORRECT"<<endl;
        }
    }
    return 0;
}
