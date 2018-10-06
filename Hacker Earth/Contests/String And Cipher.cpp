#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
#define m1 200
using namespace std;
int main()
{
    long int n,i,j,k1,k2,c,d,f,e;
    string x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        k1=x.length();
        k2=y.length();
        for(i=0;i<k1-k2+1;i++)
        {
            for(e=0;e<k2;e++)
            {
                if((y[e]>=97&&y[e]<=122)||y[e]>=65&&y[e]<=90)
                    break;
            }
            c=x[i+e]-y[e];
            if(c<0)
                c=c+26;
            for(j=i+e+1;j<k2+i;j++)
            {
                if((y[j]>=97&&y[j]<=122)||(y[j]>=65&&y[j]<=90))
                {
                    d=x[j]-y[j-i];
                    if(d==0)
                        continue;
                    if(d<0)
                        d=d+26;
                    if(c!=d)
                        break;
                }
            }
            if(j==(k2+i))
                break;
        }
        for(i=0;i<k1;i++)
        {
            if(x[i]>=97&&x[i]<=122)
            {
                x[i]=x[i]-c;
                if(x[i]>122)
                {
                    x[i]=x[i]-122+96;
                }
                else if(x[i]<97)
                {
                    x[i]=x[i]-96+122;
                }
            }
            else if(x[i]>=65&&x[i]<=90)
            {
                x[i]=x[i]-c;
                if(x[i]>90)
                {
                    x[i]=x[i]-90+64;
                }
                else if(x[i]<65)
                {
                    x[i]=x[i]-64+90;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
