#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 2, b = 10;
    int c,d;
    bool maggiore = a>b;
    c = a*maggiore+b*(!maggiore);
    d = a*(!maggiore)+b*(maggiore);
    cout << "a :" << c << "b :" << d << endl;
    return 0;
}