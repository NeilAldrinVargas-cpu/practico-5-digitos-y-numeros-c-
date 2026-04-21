#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0, digito;

    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Usamos valor absoluto para manejar negativos
    int n = abs(numero);

    // Si el usuario ingresa 0, el programa deberia contar 1 par
    if (n == 0) {
        contador = 1;
    } else {
        while (n > 0) {
            digito = n % 10;        // Extraemos el ultimo dígito

            if (digito % 2 == 0) {  // ¿Es par?
                contador++;         // Incrementamos el contador
            }

            n = n / 10;             // Eliminamos el dígito procesado
        }
    }

    cout << "Cantidad de digitos pares: " << contador << endl;

    return 0;
}
