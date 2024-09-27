#include <iostream>
using namespace std;
int main(){

    int areaT = 0;

    int area[2];

    string classificacao[3]={"POPULAR","MASTER", "VIP"};

    cout << "Digite o valor da largura: ";
    cin >> area[0];
    cout << "Digite o valor do comprimento: ";
    cin >> area[1];

    areaT = area[0]*area[1];

    if (areaT <= 100){
        cout << "TERRENO DE CLASSIFICACAO\n---->" << classificacao[0] << "\n---->VALOR DE M QUADRADOS: " << areaT << "M2.";;
    }

    else if ((areaT > 100) && (areaT <= 500)){
        cout << "TERRENO DE CLASSIFICACAO\n---->" << classificacao[1] << "\n---->VALOR DE M QUADRADOS: " << areaT << "M2.";;
    }

    else if (areaT > 500){
        cout << "TERRENO DE CLASSIFICACAO\n---->" << classificacao[2] << "\n---->VALOR DE M QUADRADOS: " << areaT << "M2.";
    }

    else {
        cout << "TERRENO DE AREA POR ZERO, SEM CLASSIFICACAO";
    }

    return 0;

    
}