#include <iostream>
using namespace std;
int main(){
    double d, t, n;
    std::cout << "Digite o numero: ";
    std::cin >> n;
    d = n*2;
    t = n/3;
    std::cout << "O dobro do numero digitado e: " << d << "\n";
    std::cout << "A terca parte do numero digitado e: " << t;
    return 0;
}