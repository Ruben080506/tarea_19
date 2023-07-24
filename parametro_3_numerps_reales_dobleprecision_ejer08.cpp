//8) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. 
//Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.

#include <iostream>

using namespace std;

double calcularPromedio(double a, double b, double c, double &suma) {
    suma = a + b + c;
    return suma / 3.0;
}

int main() {
    double num1, num2, num3;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;

    double suma;
    double promedio = calcularPromedio(num1, num2, num3, suma);

    cout << "El promedio de los tres números es: " << promedio << endl;
    cout << "La suma de los tres números es: " << suma << endl;

    return 0;
}