#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,f,c;
        string x,y;
        cin>>x;
        n=x.length();
        c=0;
        for (int s = 1; s < (1 << n); ++s)
        {
            i=0;
            f=0;
            for (int e = 0; e < n; ++e)
            {
                if (s & (1 << e))
                {
                    y[i]=x[e];
                    i++;
                }
            }
            for(j=0;j<i/2;j++)
            {
                if(y[j]!=y[i-j-1])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                c++;
        }
        cout<<c<<endl;
    }
}
