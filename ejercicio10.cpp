
#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    
    cin >> x >> y;
    bool x_mayor;
    
    if (x > y) {
        x_mayor == true;
    } else {
        x_mayor == false;
    }
    
    int i;
    
    if (x_mayor) {
        i = x;
    } else {
        i = y;
    }
    
    double modulo_x, modulo_y;
    
    for (i; i >= 1; i -= 1) {
        
        modulo_x = x % i;
        modulo_y = y % i;
        
        if (modulo_x == 0 && modulo_y == 0) {
            cout << i;
            break;
        }
        
    }
    
    return 0;
}