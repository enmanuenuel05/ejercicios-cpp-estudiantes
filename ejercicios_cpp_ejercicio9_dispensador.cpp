// 9. Dispensador automático de bebidas
#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "1: Cafe | 2: Te | 3: Chocolate | 4: Capuchino" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1: cout << "Precio: $2.00" << endl; break;
        case 2: cout << "Precio: $1.50" << endl; break;
        case 3: cout << "Precio: $2.50" << endl; break;
        case 4: cout << "Precio: $3.00" << endl; break;
        default: cout << "Opicion no disponible" << endl; break;
    }

    return 0;
}
