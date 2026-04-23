#include <iostream>
using namespace std;

int main() {
    int codigo, n;
    int sumaDigitos = 0;
    int contadorPares = 0;
    int umbralSuma = 15; // Definimos un limite para la suma

    cout << "Ingrese el codigo numerico a evaluar: ";
    cin >> codigo;

    n = abs(codigo);

    while (n > 0) {
        int digito = n % 10;
        
        // Regla 1: Sumar el digito
        sumaDigitos += digito;
        
        // Regla 2: Verificar si es par
        if (digito % 2 == 0) {
            contadorPares++;
        }
        
        n = n / 10;
    }

    cout << "\n--- Resultados de Seguridad ---" << endl;
    cout << "Suma total: " << sumaDigitos << endl;
    cout << "Digitos pares encontrados: " << contadorPares << endl;

    // Evaluacion de las dos condiciones usando el operador LOGICO AND (&&)
    if (contadorPares >= 2 && sumaDigitos > umbralSuma) {
        cout << "ESTADO: CODIGO SEGURO" << endl;
    } else {
        cout << "ESTADO: CODIGO INSEGURO (No cumple los requisitos)" << endl;
    }

    return 0;
}
