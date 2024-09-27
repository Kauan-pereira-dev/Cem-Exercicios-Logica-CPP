#include <iostream>
using namespace std;
int main(){

    string nome, snome;
    double salario, anosT;

    cout << "--------------------------------------------" << endl;
    cout << "\tINSIRA SEUS DADOS: " << endl;
    cout << "Digite o seu nome: (Somente o Primeiro)" << endl;
    cin >> nome;
    cout << "Digite o seu sobrenome: " << endl;
    cin >> snome;
    cout << "Digite o seu salario: R$" << endl;
    cin >> salario;
    cout << "Digite ha quantos anos trabalha na empresa: ";
    cin >> anosT;

   

    double Dados_Empr[5]={salario, anosT, 0.03, (12.5/100), 0.2};

    if (anosT > 0){    
        if (anosT <= 3){
            salario += (salario*Dados_Empr[2]);
            cout << "--------------------------------------------" << endl;
            cout << "O seu novo salario e: R$" << salario;
        }

        else if (anosT <= 10){
            salario += (salario*Dados_Empr[3]);
            cout << "--------------------------------------------" << endl;
            cout << "O seu novo salario e: R$" << salario;
        }

        else if (anosT >= 10){
            salario += (salario*Dados_Empr[4]);
            cout << "--------------------------------------------" << endl;
            cout << "O seu novo salario e: R$" << salario;
        }

    }

    else {
        cout << "--------------------------------------------" << endl << "O AUMENTO NAO ESTA DISPONIVEL";
    }

}