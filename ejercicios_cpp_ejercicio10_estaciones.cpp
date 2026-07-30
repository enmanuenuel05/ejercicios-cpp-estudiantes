// 10. Identificador de estaciones del año por mes
#include <iostream>
using namespace std;

int main() {
    int mes;
    cout << "Ingresa numero de mes (1-12): ";
    cin >> mes;

    switch(mes) {
        case 12: case 1: case 2: cout << "Estacion: Invierno" << endl; break;
        case 3: case 4: case 5: cout << "Estacion: Primavera" << endl; break;
        case 6: case 7: case 8: cout << "Estacion: Verano" << endl; break;
        case 9: case 10: case 11: cout << "Estacion: Otono" << endl; break;
        default: cout << "Mes invalido" << endl; break;
    }

    return 0;
}
