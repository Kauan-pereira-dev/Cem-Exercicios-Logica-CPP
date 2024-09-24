#include <iostream>
using namespace std;
int main(){
    string nome;
    double salario;
    std::cout << "Digite o seu nome: ";
    std::cin >> nome;
    std::cout << "Digite o seu salario: ";
    std:: cin >> salario;
    std::cout << "\nNome do funcionario: " << nome;
    std::cout << "\nSalario: R$" << salario;
    std::cout << "\nO(a) funcionario(a) " << nome << " tem um salario de R$" << salario << ".";
    return 0;
}