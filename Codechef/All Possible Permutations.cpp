#include<iostream>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cmath>
using namespace std;
bool flag=false;
int AllPathsUtil(int *a,int n,int *path,int pi,int l)
{
    if(flag==true)
        return 0;
    int j,d;
    if(pi==n)
    {
        d=0;
        for(j=0;j<n;j++)
        {
            d=d+*((a + j*n) + path[j]-1);
        }
        d=d+*((a+(path[0]-1)*n)+path[n-1]-1);
        if(d==l)
            flag=true;
        return 0;
    }
    int pathc[n];
    for(j=0;j<n;j++)
        pathc[j]=0;
    for(j=0;j<pi;j++)
    {
        pathc[path[j]-1]=1;
    }
    for(j=0;j<n;j++)
    {
        if(pathc[j]==0)
        {
            path[pi]=j+1;
            if(pi==j)
            {
                continue;
            }
            AllPathsUtil(a,n,path,pi+1,l);
        }
    }
}
int printAllPaths(int *a,int n,int l)
{
    int path[n];
    AllPathsUtil(a,n,path,0,l);
    return 0;
}
int main()
{
    int n,l,i,j;
    cin>>n>>l;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    printAllPaths(*a,n,l);
    if(flag)
    {
        cout<<"POSSIBLE"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
