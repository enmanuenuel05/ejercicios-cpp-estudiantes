// 8. Conversor de tipo de usuario (Roles)
#include <iostream>
using namespace std;

int main() {
    char rol;
    cout << "Ingresa tu rol (A=Admin, E=Editor, L=Lector): ";
    cin >> rol;

    switch(rol) {
        case 'A': case 'a': cout << "Rol: Administrador (Acceso total)" << endl; break;
        case 'E': case 'e': cout << "Rol: Editor (Modificar contenido)" << endl; break;
        case 'L': case 'l': cout << "Rol: Lector (Solo lectura)" << endl; break;
        default: cout << "Rol: Invitado" << endl; break;
    }

    return 0;
}
