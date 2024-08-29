#include <iostream>
using namespace std;
int main(){
    double km, hm, dam, m, dm, cm, mm;
    std::cout << "Digite o valor da distancia (metros): ";
    std::cin >> m;
    km = m/1000;
    hm = m/100;
    dam =m/10;
    dm = m*10;
    cm =m*100;
    mm = m*1000;
    std::cout << "O valor da distancia: " << m << "metros. Equivale a:\n";
    std::cout << "Km: " << km << "\n";
    std::cout << "Hm: " << hm << "\n";
    std::cout << "Dam: " << dam << "\n";
    std::cout << "Dm: " << dm << "\n";
    std::cout << "Cm: " << cm << "\n";
    std::cout << "Mm: " << mm << "\n";
    return 0;

}