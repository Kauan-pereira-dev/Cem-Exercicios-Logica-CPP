#include <iostream>
using namespace std;
int main(){

    int ano, idade, anoNasc, anosRest;


    cout << "---------------------------------------------------" << endl;
    cout << "\t\tALISTAMENTO MILITAR" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Digite seu ano de nascimento: ";
    cin >> anoNasc;

    cout << "Digite o ano em que estamos: ";
    cin >> ano;

    idade =  ano - anoNasc;

   

    if (ano > anoNasc){
        if (idade >= 18 ){
        cout << "Voce atigingiu a maioridade e pode se alistar.";
        }

        else {
        anosRest = 18 - idade;
        cout << "Voce ainda nao atingiu a maioridade, faltam: " << anosRest << " anos para que possa se alistar.";
        }
    }

    else {
        cout << "Valor incorreto, o ano de nascimento deve ser menor que o ano atual.";
    }
}