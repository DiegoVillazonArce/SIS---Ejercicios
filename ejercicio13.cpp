
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    
    int k, n;
    cout << "k = ";
    cin >> k;
    
    cout << "n = ";
    cin >> n;
    
    long suma = 0;
    
    for (int i = 1; i <= n; i++) {
        
        suma += pow(i, k);
        
    }
    cout << suma;
    
    return 0;
}