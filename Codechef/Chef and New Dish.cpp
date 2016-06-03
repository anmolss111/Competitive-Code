#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t,i,j,c,d;
    cin>>t;
    fflush(stdin);
    for(i=0;i<t;i++)
    {
        char x[400];
        gets(x);
        int h[51][2]={0},m[51][2]={0};
        c=-1;
        d=0;
        for(j=0;x[j]!='\0';j++)
        {
            if(j%6==0)
            {
                c++;
                h[c][0]=x[j]-48;
            }
            else if(j%6==1)
                h[c][1]=x[j]-48;
            else if(j%6==3)
                m[c][0]=x[j]-48;
            else if(j%6==4)
                m[c][1]=x[j]-48;
        }
        for(j=0;j<c;j++)
        {
            if((h[j][0]==m[j][1])&&(h[j][1]==m[j][0]))
                d++;
            else if((h[j][0]==m[j][0])&&(h[j][1]==m[j][1]))
                d++;
            else if((h[j][0]==h[j][1])&&(m[j][0]==m[j][1]))
                d++;
        }
        cout<<d<<endl;
    }
    return 0;
}
