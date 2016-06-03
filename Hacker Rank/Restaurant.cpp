#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,s;
    cin>>t;
    for(int i1=0;i1<t;i1++)
    {
        int l,b,h=1;
        cin>>l;
        cin>>b;
        int m = (l < b ? l : b);
        for( int i = m; i>0; i--)
        {
            if(l%i == 0 && b%i == 0)
            {
                h = i;
                break;
            }
        }
        int l1=l/h;
        int b1=b/h;
        s=l1*b1;
        cout<<s<<endl;
	}
    return 0;
}
