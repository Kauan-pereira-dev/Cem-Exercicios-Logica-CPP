#include <iostream>
using namespace std;
int main(){
    int anoNas, anoAtual, Idade;
    std::cout <<"Digite o ano em que estamos: ";
    std::cin >> anoAtual;
    std::cout <<"Digite seu ano de nascimento: ";
    std::cin >> anoNas;
    Idade = anoAtual - anoNas;
    if (Idade >= 18){
        std::cout << "No ano de: " <<  anoAtual << " voce podera votar pois tera: " << Idade << " de idade!";
    } else if (Idade < 18) {
        std::cout << "Infelizmente no ano de: " <<  anoAtual << " voce nao podera votar pois nao sera maior de idade!";
    }
    return 0;
}