
#include <iostream>
using namespace std;

int main() {
    
    double u = 1;
    int n = 0;
    
    cout << "U0 = 1" << endl;
    
    for (n; n <= 9; n++) {
        u = u / (n + 1);
        cout << "U" << n + 1 << " = " << u << endl;
    }
    
    return 0;
}