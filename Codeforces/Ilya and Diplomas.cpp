#include <iostream>
using namespace std;

int main() {
	long int n,min[3],max[3],a[3];
	int i;
	cin>>n;
	for(i=0;i<3;i++)
	{
	    cin>>min[i]>>max[i];
	}
	a[0]=n-min[1]-min[2];
	if(a[0]>max[0])
	{
	    a[0]=max[0];
	}
	n=n-a[0];
	a[1]=n-min[2];
	if(a[1]>max[1])
	{
	    a[1]=max[1];
	}
	n=n-a[1];
	a[2]=n;
	for(i=0;i<3;i++)
	{
	    cout<<a[i]<<" ";
	}

	return 0;
}
