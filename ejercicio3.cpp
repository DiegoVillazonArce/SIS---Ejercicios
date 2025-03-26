
#include <iostream>
using namespace std;

int main() {
    
    string numeros;
    
    getline(cin, numeros);
    
    int i = 0;
    int conteo = 0;
    
    for (i; i < numeros.size(); i++) {
        if (conteo < 10) {
            if (numeros[i] == ' ') {
                continue;
            } else if (numeros[i] == '1') {
                cout << "Om-nom-nom :P" << endl;
                conteo++;
            } else if (numeros[i] == '0') {
                cout << "No cake :(" << endl;
                break;
            } else {
                cout << "Valor invalido";
                break;
            }
        }
    }
    
    return 0;
}