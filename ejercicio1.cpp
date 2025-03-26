
#include <iostream>
using namespace std;

int main() {
    
    string texto;
    
    getline(cin, texto);
    
    int i = 0;
    
    for (i; i < texto.size(); ++i) {
        if (texto[i] == ' ') {
            cout << i << endl;
        }
    }
    
    return 0;
}