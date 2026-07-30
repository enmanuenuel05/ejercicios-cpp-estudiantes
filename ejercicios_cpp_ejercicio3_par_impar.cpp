// 3. Verificador de números pares e impares
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "Numero Par" << endl;
    } else {
        cout << "Numero Impar" << endl;
    }

    return 0;
}
