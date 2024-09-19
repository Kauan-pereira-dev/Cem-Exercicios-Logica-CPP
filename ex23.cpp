#include <iostream>
using namespace std;
int main(){

    string nome, sexo;
    
    double compras = 0;

    cout << "--------------------------------\n";
    cout << "ESPECIAL PROMOCAO PARA TODOS\n";
    cout << "--------------------------------\n";
    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite o seu sexo (genero): (Masculino ou Feminino)";
    cin >> sexo;
    

    if ((sexo == "Masculino") || (sexo == "M") || (sexo == "m")){
            cout << "--------------------------------";
            cout << "DESCONTO\n";
            cout << "Digite o quanto gastou: R$";
            cin >> compras;
            cout << "Nome: " << nome << endl << "Sexo: Masculino." << endl;
            double desc = 0;
            desc = compras-(compras*0.05);
            cout << "Total em compras: R$" << compras << endl << "Desconto: 5%" << endl << "Novo valor: R$" << desc;
    }

    else if ((sexo == "Feminino") || (sexo == "F") || (sexo == "f")){
            cout << "--------------------------------";
            cout << "DESCONTO\n";
            cout << "Digite o quanto gastou: R$";
            cin >> compras;
            cout << "Nome: " << nome << endl << "Sexo: Feminino." << endl;
            double desc = 0;
            desc = compras-(compras*0.13);
            cout << "Total em compras: R$" << compras << endl << "Desconto: 13%" << endl << "Novo valor: R$" << desc;
    }

    else {
        cout << "Incorreto, digite M para Masculino, F para Feminino.";
    }
    
}