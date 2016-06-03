#include <iostream>
#define pi 3.14159
using namespace std;
long double r,area;
int main(){
    cin>>r;     area=(r*r)*pi;
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(4);
    cout <<"A="<<area<<endl;
    return 0;
}
