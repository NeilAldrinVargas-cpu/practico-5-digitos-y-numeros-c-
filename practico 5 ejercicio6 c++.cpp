#include <iostream>
using namespace std;

int main() {
    int numero, n;
    bool esValido = true; // Suponemos que es válido hasta demostrar lo contrario

    cout << "Ingresa un numero para validar en base 8: ";
    cin >> numero;

    n = abs(numero);

    // Caso especial para el 0 (es válido en base 8)
    if (n == 0) {
        esValido = true;
    } else {
        while (n > 0) {
            int digito = n % 10;

            if (digito >= 8) {   // Si el dígito es 8 o 9
                esValido = false; // Marcamos como inválido
                break;            // Salimos del bucle de inmediato (optimización)
            }

            n = n / 10;
        }
    }

    if (esValido) {
        cout << "El numero " << numero << " es VALIDO en base 8." << endl;
    } else {
        cout << "El numero " << numero << " es INVALIDO en base 8." << endl;
    }

    return 0;
}
