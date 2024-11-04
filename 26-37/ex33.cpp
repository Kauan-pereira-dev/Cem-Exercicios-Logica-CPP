#include <iostream>
using namespace std;

int main(){
    double salario, valorCasa, anos;
    
    cout << "Insira o valor da casa que deseja comprar: ";
    cin >> valorCasa;
    
    cout << "Insira o seu salario atual: R$";
    cin >> salario;
    
    cout << "Insira a quantia de anos em que vai pagar: ";
    cin >> anos;
    bool teste;
    double prestacaoPadrao = valorCasa/(anos*12);
    if (prestacaoPadrao >= salario+(salario*0.3)){
        teste = true;
    }
    if (teste == true){
        cout << "Emprestimo negado!\n";
        cout << "Status: Negado!\n";
    }
    else {
        cout << "Emprestimo permitido! Voce ja garantiu seu imovel!\n";
        cout << "Status: Permitido!\n" << "O valor da prestacao esta em R$" << prestacaoPadrao;
    }
    
}