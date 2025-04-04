
#include <iostream>
using namespace std;

int main() {
    
    string palabra;
    cin >> palabra;
    
    int presencia_f = -2;
    char letra;
    
    for (int i = 0; i < palabra.length(); i++) {
        
        letra = palabra[i];
        
        if (letra == 'f') {
            
            if (presencia_f == -2) {
                presencia_f++;
            } else if (presencia_f == -1) {
                presencia_f = i;
                break;
            }
            
        }
        
    }
    
    cout << presencia_f;
    
    return 0;
}