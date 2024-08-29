#include <iostream>
using namespace std;
int main(){
    double km, dia, total;
    std::cout << "Digite o valor de dias em que ficou com o veiculo: ";
    std::cin >> dia;
    dia = 90.0*dia;
    std::cout << "Digite o valor de kilometros que rodou com o veiculo: ";
    std::cin >> km;
    km = 0.2*km;
    total = km+dia;
    std::cout << "O valor total em que ira pagar pelo uso do veiculo sera: R$" << total;
    return 0;
}