
#include <iostream>
using namespace std;

int main() {
    
    // Para numeros no mayores a 99999
    
    int n;
    cin >> n;
    
    if (n < 100000 && n >= 0) {
        
        int digito_diezmil = n/10000;
        n = n%10000;
    
        int digito_mil = n/1000;
        n = n%1000;
    
        int digito_cien = n/100;
        n = n%100;
        
        int digito_diez = n/10;
        n = n%10;
        
        int digito = n;
    
        int suma = digito_diezmil + digito_mil + digito_cien + digito_diez + digito;
    
        cout << suma;
        
    } else {
        
        cout << "Error: el numero esta fuera del rango.";
        
    }
    
    return 0;
}