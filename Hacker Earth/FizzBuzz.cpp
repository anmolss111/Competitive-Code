#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int i,n;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(i%15==0)
                cout<<"FizzBuzz"<<endl;
            else if(i%3==0)
                cout<<"Fizz"<<endl;
            else if(i%5==0)
                cout<<"Buzz"<<endl;
            else
                cout<<i<<endl;
        }
    }
    return 0;
}
