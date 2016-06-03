#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long int k,n,w,w1;
    cin>>k>>n>>w;
    if(w%2==0)
    {
        w1=w+1;
        w=w/2;
        w1=w1*w;
    }
    else
    {
        w1=w;
        w=(w+1)/2;
        w1=w1*(w);
    }
    w1=w1*k;
    if(w1-n<=0)
        cout<<0;
    else
        cout<<w1-n;
    return 0;
}
