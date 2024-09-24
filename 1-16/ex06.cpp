#include <iostream>
using namespace std;
int main(){
    int ant, suc, n;
    std::cout << "Digite o numero: ";
    std::cin >> n;
    ant = n-1;
    suc = n+1;
    std::cout << "O numero digitado e: " << n << "\n";
    std::cout << "O sucessor deste numero e: " << suc << "\n";
    std::cout << "O antecessor deste numero e: "  << ant << "\n";
    return 0;
}