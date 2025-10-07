#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool prime = true;
    for (int i = 2; i <= n/i && prime; i++) {
        if(n%i==0){
            prime = false;
        }
    }
    cout << n;
    if(!prime)
        cout << " non";

    cout << " è primo";
    
}