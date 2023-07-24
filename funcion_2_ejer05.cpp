//5) Diseñe la función que calcula el resultado de: 

#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular el factorial de un número
unsigned long long calcularFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calcularFactorial(n - 1);
}

// Función para calcular la expresión x-(x^3/3!)+(x^5/5!)-(x^7/7!)
double calcularResultado(double valorX) {
    double resultado = valorX - (pow(valorX, 3) / calcularFactorial(3)) + (pow(valorX, 5) / calcularFactorial(5)) - (pow(valorX, 7) / calcularFactorial(7));
    return resultado;
}

int main() {
    double x;
    cout << "Ingrese el valor de X: ";
    cin >> x;

    double resultado = calcularResultado(x);
    cout << "El resultado es: " << resultado << endl;

    return 0;
}
