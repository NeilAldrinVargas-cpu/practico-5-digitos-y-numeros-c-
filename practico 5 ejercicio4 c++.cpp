#include <iostream>
using namespace std;

int main() {
    int numeroOriginal, n, invertido = 0, digito;

    cout << "Ingresa un numero para verificar si es capicua: ";
    cin >> numeroOriginal;

    n = numeroOriginal; // Hacemos una copia para no perder el valor original

    // Proceso de inversion (visto en el ejercicio 2)
    while (n > 0) {
        digito = n % 10;
        invertido = (invertido * 10) + digito;
        n = n / 10;
    }

    // Verificacion final
    if (numeroOriginal == invertido) {
        cout << "El numero " << numeroOriginal << " ES capicua." << endl;
    } else {
        cout << "El numero " << numeroOriginal << " NO es capicua." << endl;
    }

    return 0;
}
