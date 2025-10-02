#include <iostream>
using namespace std;

int main(){
    int valoreIngresso,valoreUscita;
    char carattereIngresso, carattereUscita;
    bool minoreDi91;
    bool valido;
    cin >> carattereIngresso;
    valoreIngresso = (int)carattereIngresso;
    valido = valoreIngresso < 65 || valoreIngresso > 122;
    minoreDi91 = valoreIngresso<91; //nel caso sia 1, allora aggiungerà 32. Nel caso sia 0, sottrarrà 32
    valoreUscita = ((valoreIngresso+32)*minoreDi91 + (valoreIngresso-32)*(1-minoreDi91))*(!valido)+(valido*63);
    cout << (char)valoreUscita;
    return 0;
    
}