#include <iostream>
using namespace std;
int main(){
    int n1, n2;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    if (n1 > n2){
        cout << "O primeiro numero e maior que o segundo, \n(" << n1 << " > " << n2 << ").";
    }

    else if (n2 > n1){
        cout << "O segundo numero e maior que o primeiro, \n(" << n2 << " > " << n1 << ").";

    }

    else {
        cout << "Os valores digitados sao iguais, reinicie o programa e digite-os novamente.";
    }

    return 0;
}