
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    
    string n;
    cin >> n;
    
    string n_inverso = "";
    
    for (int i = n.length() - 1; i >= 0; i -= 1) {
        n_inverso += n[i];
    }
    
    if (n_inverso == n) {
        cout << "Es palindrome.";
    } else {
        cout << "No es palindrome.";
    }
    
    return 0;
}