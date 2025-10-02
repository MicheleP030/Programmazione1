#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,delta,x1,x2;

    cout << "immetti a b e c" << endl;
    cin >> a >> b >> c;
    delta = pow(b,2)-4*a*c;
    x1 = -b-sqrt(delta)/(2*a);
    x1 = -b+sqrt(delta)/(2*a);
    cout << "x1: "<<x1<<"\tx2: "<<x2<<endl;
    return 0;
}