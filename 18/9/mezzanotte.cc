#include <iostream>
using namespace std;

int main(){
    uint ore, minuti, secondi;

    cout << "immetti ore, minuti, secondi: ";
    cin >> ore >> minuti >> secondi;
    cout << "mancano " << (24*60*60)-((ore*60*60)+(minuti*60)+secondi) << " secondi";
    return 0;
    
}