
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    double suma = 0;
    bool signo = true;
    
    for (int i = 1; i<=n; i++) {
        
        if (signo) {
            
            suma += 1.0 / i;
            signo = false;
        
        } else {
            
            suma -= 1.0 / i;
            signo = true;
            
        }
        
    }
    
    cout << suma;
    
    return 0;
}