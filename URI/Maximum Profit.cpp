#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long int n,i,j,c;
    cin>>n;
    long long int a[n],b[n][2];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i][0]=a[i];
        b[i][1]=i;

    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[j][0]>b[j+1][0])
            {
                swap(b[j][0],b[j+1][0]);
                swap(b[j][1],b[j+1][1]);
            }
        }
    }
    c=0;
    int f=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[n-j-1][1]>b[i][1])
            {
                c=b[n-j-1][0]-b[i][0];
                f=1;
                break;
            }
        }
        if(f==1)
            break;
    }
    cout<<c<<endl;

}
