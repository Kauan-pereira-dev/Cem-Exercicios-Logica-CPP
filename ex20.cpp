#include <iostream>
using namespace std;
int main(){
    int numeroInt;
    std::cout << "Digite o numero: ";
    std::cin >> numeroInt;
    if (numeroInt % 2 == 0){ //se o modulo (resto da divisao) for zero, o numero é PAR, caso não, será declarado como ímpar.
        std::cout << "O numero digitado e par!";

    } else {
        std::cout << "O numero digitado e impar!";
    }
    return 0;
}