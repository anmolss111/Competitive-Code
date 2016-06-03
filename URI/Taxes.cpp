#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    float x,y;
    cin>>x;
    if(x>=0.00&&x<=2000.00)
        cout<<"Isento"<<endl;
    else
    {
        if(x<=3000.00)
        {
            y=(x-2000.00)*0.08;
        }
        else
        {
            y=80.00;
            if(x<=4500.00)
            {
                y=y+(x-3000.00)*0.18;
            }
            else
            {
                y=y+270.00+(x-4500.00)*0.28;
            }
        }
        printf("R$ %.2f\n",y);
    }
    return 0;
}
