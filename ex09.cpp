#include <iostream>
using namespace std;
int main(){
    //neste exercício, no ano de 2014 meados de setembro, o dólar equivale a: R$3.45. O valor da época se aplica neste exercício.
    double d, r;
    std::cout << "Digite o valor que voce possui (R$): ";
    std::cin >> r;
    d = r/3.45;
    std::cout << "Com o valor de R$ (" << r << ") que voce possui, voce pode comprar U$ " << d << ".";
    return 0;
}