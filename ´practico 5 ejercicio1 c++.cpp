#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0, digito;

    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Usamos el valor absoluto por si el usuario ingresa un numero negativo
    int n = abs(numero); 

    while (n > 0) {
        digito = n % 10;    // Paso 1: Extraer el ultimo digito
        suma += digito;     // Paso 2: Sumarlo al acumulador
        n = n / 10;         // Paso 3: Eliminar el ultimo digito del numero
    }

    cout << "La suma de los digitos de " << numero << " es: " << suma << endl;

    return 0;
}
