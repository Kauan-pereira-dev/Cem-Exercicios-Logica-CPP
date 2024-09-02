#include <iostream>
using namespace std;
int main(){
    double velocidadeCarro, valorMulta;
    std::cout << "Digite a velocidade do carro: ";
    std::cin >> velocidadeCarro;
    int const acrescimoMulta = 5.00;
    if (velocidadeCarro > 80.00) {
        std::cout << "A velocidade do carro ultrapassou o limite de velocidade e voce foi multado.\n";
        valorMulta = (velocidadeCarro-80.00) * acrescimoMulta; //O programa ira realizar o calculo da velocidad - 80 (limite de vel) * 5 (acrescimo de multa);
        std::cout << "O valor da multa esta em R$: " << valorMulta;     
        }
    if (velocidadeCarro <= 80.00) {
        std::cout << "Voce esta dentro do limite de velocidade! Assim como os franceses dizem: Bon Voyage!";
    }
    return 0;
}