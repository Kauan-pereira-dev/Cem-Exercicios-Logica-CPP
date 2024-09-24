#include <iostream> 
using namespace std;
int main(){
    double diasPerdidos, anosFumando, cigarrosTotais, horasFumando; //1.5 anos, etc.
    int cigarrosDia; //cigarros com valor inteiro

    std::cout << "Digite a quantia de cigarros que fuma por dia: \n";
    std::cin >> cigarrosDia;
    std::cout << "Digite a quantos anos voce fuma: \n";
    std::cin >> anosFumando;

    //calculos:
    cigarrosTotais = cigarrosDia * anosFumando;
    horasFumando = (cigarrosTotais*10.00)/60.00;
    diasPerdidos = (horasFumando*365)/24;
    std::cout << "Com os dados fornecidos, voce fumando: " << cigarrosDia << " cigarros por dia durante: " << anosFumando << " ano(s), voce perdera: " << diasPerdidos << " dias de vida!";
    return 0;

}