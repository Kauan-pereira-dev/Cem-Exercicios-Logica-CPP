#include <iostream>
#include <vector>

using namespace std;
int main(){
    int ano;
    cout << "Digite o ano: ";
    cin >> ano;

    vector<int> ano_atual {ano};

    if ((ano % 4) == 0){
        if (ano >= 2024){
        cout << "O ano de " << ano << " sera bisexto!\n";
        }
        else {
            cout << "O ano de " << ano << " e/foi bisexto!\n";
        }
    }
    else {
        cout << "O ano de " << ano << " nao e bisexto\n";
    }

    return 0;
}