#include <iostream>
using namespace std;

int main(){
    int n1, n2, med;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> n2;
    med = (n1+n2)/2;
    std::cout << "A media entre estes dois numeros inteiros que foram digitados e: " << med;
    return 0;
}