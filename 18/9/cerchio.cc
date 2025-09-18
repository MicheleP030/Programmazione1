#include <iostream>
using namespace std;
int main(){
    float raggio, circonferenza, area;
    const float pigreco = 3.141529;

    cout << "Inserisci il raggio: ";
    cin >> raggio;
    area = raggio*raggio*pigreco;
    circonferenza = 2*pigreco*raggio;
    cout << "La circonferenza è " << circonferenza << endl;
    cout << "L'area del cerchio è " << area << endl;
    return 0;
}