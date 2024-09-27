#include <iostream>
using namespace std;
int main(){

    int pn, sn, m;

    cout << "--------------------------------------------\n" << "\tCALCULE SUA MEDIA\n" << "--------------------------------------------\n";
    cout << "Digite sua primeira nota: \n---->";
    cin >> pn;
    cout << "Digite sua segunda nota: \n---->";
    cin >> sn;

    m = (pn + sn)/2;

    int notas[3]={pn, sn, m};

    
    if ((pn + sn) <= 20){
        if (notas[2] > 4.9){
            if (notas[2] < 6.9){
                cout << "-------------------\nSTATUS: \n---->RECUPERACAO";
            }

            else if (notas[2] >= 7.0){
                cout << "-------------------\nSTATUS: \n----->APROVADO";
            }

            }

            else {
            cout << "-------------------\nSTATUS: \n---->REPROVADO";
            }
    }

    else {
        cout << "NOTA INVALIDA, REDIGITE";
    }

    return 0;
}