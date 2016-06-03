#include<iostream>
using namespace std;
int main()
{
    long long int b;
    int a,i,j,t,n1,n2,r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n2=a%10;
        int c[5]={0};
        for(i=1;;i++)
        {
            n1=1;
            for(j=0;j<i;j++)
                n1=n1*n2;
            n1=n1%10;
            if(n1==n2&&i!=1)
                break;
            c[i-1]=n1;
        }
        i--;
        if(b==0)
            cout<<1<<endl;
        else
        {
        r=b%i;
        if(r==0)
            r=i-1;
        else
            r=r-1;
        cout<<c[r]<<endl;
        }
    }
    return 0;
}
