#include <iostream>
using namespace std;

int main() {
    int numero, n;
    int suma = 0;
    int contadorSuperan5 = 0;
    int totalDigitos = 0;

    cout << "Ingresa el numero de uso digital: ";
    cin >> numero;

    n = abs(numero);

    if (n == 0) {
        totalDigitos = 1; // El caso del cero cuenta como una app de 0 horas
    } else {
        while (n > 0) {
            int digito = n % 10;

            suma += digito;           // Sumamos para el total de horas
            totalDigitos++;           // Contamos cuantas apps hay en total

            if (digito > 5) {         // Condicion: mas de 5 horas
                contadorSuperan5++;
            }

            n = n / 10;
        }
    }

    // Calculamos el promedio (usamos float para tener decimales)
    float promedio = (float)suma / totalDigitos;

    cout << "--- Analisis de Uso ---" << endl;
    cout << "Total de horas: " << suma << "h" << endl;
    cout << "Apps que superan las 5h: " << contadorSuperan5 << endl;
    cout << "Promedio de uso por app: " << promedio << "h" << endl;

    return 0;
}
