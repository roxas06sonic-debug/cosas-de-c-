#include <iostream>
using namespace std;

int main(){
    int doorCode = 8746;
    int userCode{};
    cout << "introduce el codigo: ";
    cin >> userCode;

    if ( userCode == doorCode ) {
        cout << "Codigo correcto.\nBienvenido.\n";
    } else {
        cout << "Codigo incorrecto.\nIntente de nuevo: ";
        cin >> userCode;
        if ( userCode == doorCode ) {
            cout << "Codigo correcto.\nBienvenido.\n";
        } else {
            cout << "Codigo incorrecto.\nIntente de nuevo: ";
            cin >> userCode;
            if (userCode == doorCode) {
                cout << "Codigo correcto.\nBienvenido.\n";
            } else {
                cout << "Codigo incorrecto.\nNumero de intentos superados.\n";
            }
        }
    }

    return 0;
}