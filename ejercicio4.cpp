
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int n_factorial = 1;
    
    if (n > 14) {
        cout << "El numero es muy grande. Intentelo de nuevo." << endl;
    } else if (n < 0) {
        cout << "El numero es negativo. Intentelo de nuevo." << endl;
    } else {
        int i = 1;
        for (i; i<=n; i++) {
            n_factorial = n_factorial * i;
        }
        cout << n_factorial;
    }
    
    return 0;
}