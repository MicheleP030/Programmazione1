#include <iostream>
using namespace std;

int main(){
    int a = -5;
    bool positivo = a>0;
    cout << a*(positivo*1)+a*((1-positivo)*(-1)) << endl;
    return 0;
}