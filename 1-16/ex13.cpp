#include <iostream>
using namespace std;
int main(){
    double salario, aumento, nsal;
    std::cout << "Digite o seu salario: R$";
    std::cin >> salario;
        //O valor foi definido como double, necessário mostrar com ponto (vírgula, numero quebrado ou não exato).
    aumento = salario * (15.00/100.00);
    nsal = aumento + salario;
    std::cout << "O seu salario com um aumento em 15 porcento resulta em: R$" << nsal;
    return 0;
}