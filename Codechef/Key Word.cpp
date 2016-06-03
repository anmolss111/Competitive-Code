#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long int t,i,j,c,n;
    cin>>t;
    string x;
	while(t--)
    {
        cin>>x;
        n=x.length();
        for(i=0;i<n-1;i++)
        {
            if(x[i]=='0'||x[i]=='1')
            {
                cout<<" ";
                continue;
            }
            j=i+1;
            while(x[i]==x[j])
            {
                j++;
                if(x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='8')
                {
                    if(j>(3+i))
                    {
                        j--;
                        break;
                    }
                }
                if(x[i]=='7'||x[i]=='9')
                {
                    if(j>(4+i))
                    {
                        j--;
                        break;
                    }
                }
            }
            c=j-i;
            if(x[i]=='2')
                cout<<char(x[i]+46+c);
            else if(x[i]=='3')
                cout<<char(x[i]+48+c);
            else if(x[i]=='4')
                cout<<char(x[i]+50+c);
            else if(x[i]=='5')
                cout<<char(x[i]+52+c);
            else if(x[i]=='6')
                cout<<char(x[i]+54+c);
            else if(x[i]=='7')
                cout<<char(x[i]+56+c);
            else if(x[i]=='8')
                cout<<char(x[i]+59+c);
            else if(x[i]=='9')
                cout<<char(x[i]+61+c);
            i=j-1;
        }
        if(x[n-2]!=x[n-1])
        {
            if(x[i]=='2')
                cout<<char(x[i]+47);
            else if(x[i]=='3')
                cout<<char(x[i]+49);
            else if(x[i]=='4')
                cout<<char(x[i]+51);
            else if(x[i]=='5')
                cout<<char(x[i]+53);
            else if(x[i]=='6')
                cout<<char(x[i]+55);
            else if(x[i]=='7')
                cout<<char(x[i]+57);
            else if(x[i]=='8')
                cout<<char(x[i]+60);
            else if(x[i]=='9')
                cout<<char(x[i]+62);
        }
        cout<<endl;
    }
    return 0;
}
