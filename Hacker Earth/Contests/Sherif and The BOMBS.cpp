#include <iostream>
using namespace std;
int main()
{
	int n,x,y,r,b,i,j;;
	cin>>n;
	int a[1000][1000]={0};
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}
	while(n--)
	{
	    cin>>x>>y>>r;
	    x--;
	    y--;
	    b=r-1;
	    for(i=0;i<(2*b+1);i++)
	    {
	        for(j=0;j<(2*b+1);j++)
	        {
	            if(x>=b&&y>=b&&(x+b)<1000&&(y+b)<1000)
	                a[x-b+i][y-b+j]++;
	        }
	    }
	    if(y+r<1000)
	        a[x][y+r]++;
	    if(y>=r)
	        a[x][y-r]++;
	    if(x+r<1000)
	        a[x+r][y]++;
	    if(y>=r)
	        a[x-r][y]++;
	}
	long int c=0;
	for(i=0;i<1000;i++)
	{
	    for(j=0;j<1000;j++)
	    {
	        if(a[i][j]>=2)
	            c++;
	    }
	}
	cout<<c<<endl;
	return 0;
}
