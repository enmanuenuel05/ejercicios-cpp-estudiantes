// 2. Sistema de calificaciones escolares
#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingresa tu nota (0 a 100): ";
    cin >> nota;

    if (nota >= 60) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }

    return 0;
}
