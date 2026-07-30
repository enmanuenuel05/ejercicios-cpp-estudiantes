// 5. Clasificador de temperatura ambiental
#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Ingresa la temperatura en Celsius: ";
    cin >> temp;

    if (temp < 15) {
        cout << "Clima Frio" << endl;
    } else if (temp <= 28) {
        cout << "Clima Templado" << endl;
    } else {
        cout << "Clima Calido" << endl;
    }

    return 0;
}
