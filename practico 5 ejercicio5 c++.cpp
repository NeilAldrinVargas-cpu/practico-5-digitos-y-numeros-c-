#include <iostream>
#include <cmath> // Para usar pow() si fuera necesario, aunque lo haremos manual
using namespace std;

int main() {
    int numero, complementoTotal = 0, digito, posicion = 1;

    cout << "Ingresa un numero para calcular su complemento a 9: ";
    cin >> numero;

    int n = numero;

    while (n > 0) {
        digito = n % 10;            // Extraemos el ultimo (ej. 5)
        int comp = 9 - digito;      // Calculamos complemento (9 - 5 = 4)

        // Lo sumamos al total respetando su posicion original
        complementoTotal = complementoTotal + (comp * posicion);

        posicion *= 10;             // Aumentamos la posicion (1, 10, 100...)
        n = n / 10;                 // Quitamos el ultimo digito
    }

    cout << "El complemento a 9 de " << numero << " es: " << complementoTotal << endl;

    return 0;
}
