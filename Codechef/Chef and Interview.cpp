#include <stdio.h>
int main()
{
    long long int t,i,n,j,c;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        c=1+n;
        for(j=3;j<=(n)/2;j=j+2)
        {
            if(n%j==0)
            {
                c=c+j;
            }
        }
        if(n%2==0)
        {
            for(j=2;j<=(n)/2;j=j+2)
            {
                if(n%j==0)
                {
                    c=c+j;
                }
            }
        }
        if(n==1)
            c=1;
        printf("%lld\n",c);
    }
    return 0;
}
