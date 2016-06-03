#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j,c,b,k,m,n;
    string x;
    cin>>t;
    fflush(stdin);
    for(i=0;i<t;i++)
    {
        getline(cin,x);
        b=x.length();
        c=0;
        m=0;
        int a[1001];
        for(j=0;j<=b;j++)
        {
            if(x[j]==' '||j==b)
            {
                a[c]=j;
                c++;
            }
        }
        for(j=c;j>=1;j--)
        {
            a[j]=a[j]-a[j-1]-1;
        }
        for(j=1;j<c;j++)
        {
            if(a[j-1]!=a[j])
                m++;
        }
        m++;
        int y[m];
        for(j=0;j<m;j++)
        {
            y[j]=0;
        }
        m=0;
        for(j=1;j<c;j++)
        {
            if(a[j-1]==a[j])
                y[m]++;
            else
                m++;
        }
        for(j=0;j<m;j++)
        {
            y[j]++;
        }
        n=y[0];
        for(j=1;j<m;j++)
        {
            if(n<y[j])
                n=y[j];
        }
        cout<<n<<endl;
    }
    return 0;
}
