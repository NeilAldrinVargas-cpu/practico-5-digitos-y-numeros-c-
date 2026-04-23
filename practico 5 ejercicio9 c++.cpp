#include <iostream>
using namespace std;

int main() {
    int pin, n;
    int contadorDigitos = 0;
    int ultimoDigito = -1; // Empezamos con -1 porque ningun digito sera igual a este
    bool tieneRepetidos = false;

    cout << "Ingrese su PIN de 4 digitos: ";
    cin >> pin;

    n = pin;

    // Validacion de 4 digitos (rango numerico)
    if (pin < 1000 || pin > 9999) {
        cout << "Error: El PIN debe tener exactamente 4 digitos." << endl;
        return 0; // Finaliza el programa
    }

    while (n > 0) {
        int digitoActual = n % 10;
        contadorDigitos++;

        // Comparamos con el digito que sacamos en la vuelta anterior
        if (digitoActual == ultimoDigito) {
            tieneRepetidos = true;
        }

        ultimoDigito = digitoActual; // "Memoria": el actual sera el ultimo para la siguiente vuelta
        n = n / 10;
    }

    if (!tieneRepetidos) {
        cout << "PIN VALIDO. Cumple con las normas de seguridad." << endl;
    } else {
        cout << "PIN INVALIDO. No se permiten numeros repetidos consecutivos." << endl;
    }

    return 0;
}
