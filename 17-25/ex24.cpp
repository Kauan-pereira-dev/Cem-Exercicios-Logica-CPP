#include <iostream>
using namespace std;
int main(){
    double valor, dist;

    cout << "-------------------------------------" << endl;
    cout << "\tCALCULAR VALOR DISTANCIA" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Digite a distancia (KM): " << endl;
    cin >> dist;

    valor = 0;

    if (dist >= 200.00){
        valor = dist * 0.45;
        cout << "A distancia foi de " << dist << " Km, \nO valor cobrado e de R$ " << valor;
    }

    else if ((dist < 200.00) && (dist > 0)){
        valor = dist * 0.50;
        cout << "A distancia foi de " << dist << " Km, \nO valor cobrado e de R$ " << valor;
    }

    else {
        cout << "A distancia informada e zero (0)";
    }

    return 0;
}