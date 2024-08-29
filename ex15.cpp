#include <iostream>
using namespace std;
int main(){
    double dias, ghora, salario;
    std::cout << "Digite a quantia de dias na qual voce trabalhou neste mes: ";
    std::cin >> dias;
    ghora = 25.00;
    salario = dias *(ghora*8.00);
    std::cout << "A quantia de salario que voce ira receber neste mes sera: R$" << salario;
    return 0;
}