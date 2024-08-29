#include <iostream>
using namespace std;
int main(){
    double l, al, area, p;
    std::cout << "Digite a largura da parede: "; 
    std::cin >> l;
    std::cout << "Digite a altura da parede: ";
    std::cin >> al;
    area = l*al;
    p = 2;
    std::cout << "A quantia de latas de tinta suficientes para pintar a parede sao: " << area/p << ".";
    return 0;

}