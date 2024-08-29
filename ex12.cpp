#include <iostream>
using namespace std;
int main(){
    //o erro persistiu pois eu esqueci de declara o numero do calculo como REAL, este ficou sem "." e então não foi lido.
    double desconto, prod, calculo;
    std::cout << "Digite o valor do produto:\n";
    std::cin >> prod;
    desconto = prod*(5.0/100.0);
    std::cout << desconto;
    calculo = prod - desconto;
    std::cout << "O valor do produto com 5 porcento de desconto sera:" << calculo;
    return 0;
}