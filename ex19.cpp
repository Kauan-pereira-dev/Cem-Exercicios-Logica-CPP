#include <iostream>
using namespace std;
int main(){
    //Declaração de variáveis:

    double nota1, nota2, media;

    //Declaração de mensagens:

    string mensagemAproveitamento = "De acordo com as notas informadas, \n";
    string aprovBom = "teve um excelente aproveitamento!";
    string aprovOk = "houve aproveitamento!";
    string semAprov = "infelizmente nao houve aproveitamento algum!";

    std::cout << "Digite sua primeira nota: ";
    std::cin >> nota1;
    std::cout << "Digite sua segunda nota: ";
    std::cin >> nota2;

    media = (nota1+nota2)/2;

    if (media >= 9.0){
        std::cout << "A media de suas notas e: " << media << "\n" << mensagemAproveitamento << aprovBom;
    } else if (media > 7.0 && media < 8.9 ){
        std::cout << "A media de suas notas e: " << media <<  "\n" << mensagemAproveitamento <<aprovOk;
    } else {
        std::cout << "A media de suas notas e: " << media << "\n" <<mensagemAproveitamento  << semAprov;
    }
    return 0;
    }