
#include <iostream>
using namespace std;

string espacio() {
    return "    ";
}

int main() {
    
    cout << "Ingrese la cantidad de dias: ";
    int dias;
    cin >> dias;
    
    cout << "Ingrese el dia de la semana (como numero entre 1 y 7, siendo 1 lunes y 7 domingo): ";
    int n;
    cin >> n;
    
    int i = 1;
    int index_mes = 1;
    int index_semana = 1;
    
    for (i; i<n; i++) {
        cout << "  ";
        cout << espacio();
        index_semana++;
    }
    
    cout << " " << index_mes;
    index_mes++;
    cout << espacio();
    
    while (index_mes <= dias) {
        
        if (index_semana == 7) {
            cout << "\n";
            index_semana = 0;
        }
        
        if (index_mes < 10) {
            cout << " " << index_mes << espacio();
            index_mes++;
            index_semana++;
        } else {
            cout << index_mes << espacio();
            index_mes++;
            index_semana++;
        }
        
    }
    
    return 0;
}