
#include <iostream>
using namespace std;

int main() {
    
    string texto;
    
    getline(cin, texto);
    
    int i = 0;
    string word = "[";

    for (i; i < texto.size(); ++i) {
        
        if (texto[i] == ' ') {
            word.push_back(']');
            word.push_back(' ');
            word.push_back('[');
        } else {
            word.push_back(texto[i]);
        }
    }
    
    word.push_back(']');
    
    cout << word;
    
    return 0;
}