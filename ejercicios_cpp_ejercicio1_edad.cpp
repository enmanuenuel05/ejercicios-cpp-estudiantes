// 1. Control de acceso por edad
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Bienvenido, acceso permitido." << endl;
    } else {
        cout << "Acceso denegado, eres menor de edad." << endl;
    }

    return 0;
}
