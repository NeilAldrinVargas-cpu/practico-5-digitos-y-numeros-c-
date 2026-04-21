#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0, digito;

    cout << "Ingresa un numero para invertir: ";
    cin >> numero;

    int n = numero; // Trabajamos con una copia

    while (n > 0) {
        digito = n % 10;                // 1. Extraemos el ultimo (ej. 2)
        invertido = (invertido * 10) + digito; // 2. Desplazamos y sumamos
        n = n / 10;                     // 3. Quitamos el ultimo del original
    }

    cout << "El numero invertido es: " << invertido << endl;

    return 0;
}
