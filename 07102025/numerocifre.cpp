
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 10000;
    int b = 0;
    while(a > 0) {
        a /= 10;
        b++;
    }
    cout << b;
    
}