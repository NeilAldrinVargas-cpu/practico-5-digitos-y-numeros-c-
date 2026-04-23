#include <iostream>
using namespace std;

int main() {
    int transacciones, n;
    int totalAcumulado = 0;
    int contadorMayoresA5 = 0;

    cout << "Ingrese la serie de transacciones (numero entero): ";
    cin >> transacciones;

    n = abs(transacciones); // Aseguramos trabajar con valores positivos

    if (n == 0) {
        cout << "No se registraron movimientos." << endl;
    } else {
        while (n > 0) {
            int movimiento = n % 10; // Extraemos la transaccion actual
            
            totalAcumulado += movimiento; // Sumamos al total
            
            if (movimiento > 5) {
                contadorMayoresA5++; // Contamos si es mayor a 5
            }
            
            n = n / 10; // Pasamos a la siguiente transaccion
        }

        cout << "\n--- Resumen de Cuenta Bancaria ---" << endl;
        cout << "Total acumulado de movimientos: " << totalAcumulado << endl;
        cout << "Cantidad de transacciones mayores a 5: " << contadorMayoresA5 << endl;
    }

    return 0;
}
