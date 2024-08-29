#include <iostream>
using namespace std;
int main(){
    double delta, a, b, c;
    std::cout << "Digite o valor de A: \n";
    std::cin >> a;
    std::cout << "Digite o valor de B: \n";
    std::cin >> b;
    std::cout << "Digite o valor de C: \n";
    std::cin >> c;
    delta = (b*b)- 4*a*c;
    std::cout << "Com os valores informados, delta equivale a: " << delta;
    return 0;
}