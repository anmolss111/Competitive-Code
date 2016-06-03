#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
long long int d=0;
int printAllPathsUtil(long int *mat, int i, int j, int m, int n,long int *path, int pi)
{
    long long int c=0;
    if (i == m - 1)
    {
        for (int k = j; k < n; k++)
            path[pi + k - j] = *((mat + i*n) + k);
        for (int l = 0; l < pi + n - j; l++)
        {
            c=c+path[l];
        }
        if(c>d)
            d=c;
        return 0;
    }
    if (j == n - 1)
    {
        for (int k = i; k < m; k++)
            path[pi + k - i] = *((mat + k*n) + j);
        for (int l = 0; l < pi + m - i; l++)
        {
            c=c+path[l];
        }
        if(c>d)
            d=c;
        return 0;
    }
    path[pi] = *((mat + i*n) + j);
    printAllPathsUtil(mat, i+1, j, m, n, path, pi + 1);
    printAllPathsUtil(mat, i, j+1, m, n, path, pi + 1);
}
int printAllPaths(long int *mat, int m, int n)
{
    long int *path = new long int[m+n];
    printAllPathsUtil(mat, 0, 0, m, n, path, 0);
    return 0;
}
int main()
{
    int m,n,i,j;
    scanf("%ld %ld",&m,&n);
    long int mat[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%ld",&mat[i][j]);
        }
    }
    printAllPaths(*mat,m,n);
    printf("%lld\n",d);
    return 0;
}
