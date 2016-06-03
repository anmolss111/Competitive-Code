#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	char a[n][m];
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    long int c=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(a[i][j]=='f'||a[i][j]=='a'||a[i][j]=='c'||a[i][j]=='e')
            {
                if(a[i][j]=='f')
                {
                    if(a[i+1][j]=='a')
                    {
                        if(a[i][j+1]=='c'&&a[i+1][j+1]=='e')
                            c++;
                        else if(a[i][j+1]=='e'&&a[i+1][j+1]=='c')
                            c++;
                    }
                    else if(a[i+1][j]=='c')
                    {
                        if(a[i][j+1]=='a'&&a[i+1][j+1]=='e')
                            c++;
                        else if(a[i][j+1]=='e'&&a[i+1][j+1]=='a')
                            c++;
                    }
                    else if(a[i+1][j]=='e')
                    {
                        if(a[i][j+1]=='c'&&a[i+1][j+1]=='a')
                            c++;
                        else if(a[i][j+1]=='a'&&a[i+1][j+1]=='c')
                            c++;
                    }
                }
                else if(a[i][j]=='a')
                {
                    if(a[i+1][j]=='f')
                    {
                        if(a[i][j+1]=='c'&&a[i+1][j+1]=='e')
                            c++;
                        else if(a[i][j+1]=='e'&&a[i+1][j+1]=='c')
                            c++;
                    }
                    else if(a[i+1][j]=='c')
                    {
                        if(a[i][j+1]=='f'&&a[i+1][j+1]=='e')
                            c++;
                        else if(a[i][j+1]=='e'&&a[i+1][j+1]=='f')
                            c++;
                    }
                    else if(a[i+1][j]=='e')
                    {
                        if(a[i][j+1]=='c'&&a[i+1][j+1]=='f')
                            c++;
                        else if(a[i][j+1]=='f'&&a[i+1][j+1]=='c')
                            c++;
                    }
                }
                else if(a[i][j]=='c')
                {
                    if(a[i+1][j]=='f')
                    {
                        if(a[i][j+1]=='a'&&a[i+1][j+1]=='e')
                            c++;
                        else if(a[i][j+1]=='e'&&a[i+1][j+1]=='a')
                            c++;
                    }
                    else if(a[i+1][j]=='a')
                    {
                        if(a[i][j+1]=='f'&&a[i+1][j+1]=='e')
                            c++;
                        else if(a[i][j+1]=='e'&&a[i+1][j+1]=='f')
                            c++;
                    }
                    else if(a[i+1][j]=='e')
                    {
                        if(a[i][j+1]=='a'&&a[i+1][j+1]=='f')
                            c++;
                        else if(a[i][j+1]=='f'&&a[i+1][j+1]=='a')
                            c++;
                    }
                }
                else if(a[i][j]=='e')
                {
                    if(a[i+1][j]=='f')
                    {
                        if(a[i][j+1]=='a'&&a[i+1][j+1]=='c')
                            c++;
                        else if(a[i][j+1]=='c'&&a[i+1][j+1]=='a')
                            c++;
                    }
                    else if(a[i+1][j]=='a')
                    {
                        if(a[i][j+1]=='f'&&a[i+1][j+1]=='c')
                            c++;
                        else if(a[i][j+1]=='c'&&a[i+1][j+1]=='f')
                            c++;
                    }
                    else if(a[i+1][j]=='c')
                    {
                        if(a[i][j+1]=='a'&&a[i+1][j+1]=='f')
                            c++;
                        else if(a[i][j+1]=='f'&&a[i+1][j+1]=='a')
                            c++;
                    }
                }
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
