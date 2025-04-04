
#include <iostream>
using namespace std;

int main() {
    
    string texto;
    getline(cin, texto);
    
    string texto_nuevo = "";
    
    for (int i = 0; i < texto.length(); i++) {
        
        if (texto[i] != ' ') {
            texto_nuevo += texto[i];
        }
        
    }
    
    string texto_invertido = "";
    
    for (int i2 = texto_nuevo.length() - 1; i2 >= 0; i2 -= 1) {
        texto_invertido += texto_nuevo[i2];
    }
    
    if (texto_nuevo == texto_invertido) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}