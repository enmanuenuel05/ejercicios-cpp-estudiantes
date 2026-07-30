// 4. Simulador de cajero automático
#include <iostream>
using namespace std;

int main() {
    int saldo = 1000;
    int retiro;

    cout << "Tu saldo es $1000. Cuanto deseas retirar?: ";
    cin >> retiro;

    if (retiro <= saldo) {
        saldo = saldo - retiro;
        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Fondos Insuficientes." << endl;
    }

    return 0;
}
