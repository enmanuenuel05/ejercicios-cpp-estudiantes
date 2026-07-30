// 7. Calculadora básica de operaciones
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operacion;

    cout << "Ingresa primer numero: ";
    cin >> a;
    cout << "Ingresa operacion (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingresa segundo numero: ";
    cin >> b;

    switch(operacion) {
        case '+': cout << "Resultado: " << a + b << endl; break;
        case '-': cout << "Resultado: " << a - b << endl; break;
        case '*': cout << "Resultado: " << a * b << endl; break;
        case '/': 
            if (b != 0) cout << "Resultado: " << a / b << endl;
            else cout << "No se puede dividir entre cero" << endl;
            break;
        default: cout << "Operacion invalida" << endl; break;
    }

    return 0;
}
