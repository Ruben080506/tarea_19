//7) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números.


#include <iostream>

using namespace std;

double calcularPromedio(double num1, double num2, double num3) {
    double promedio = (num1 + num2 + num3) / 3;
    return promedio;
}

int main() {
    double numero1, numero2, numero3;
    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;
    cout << "Ingrese el tercer número: ";
    cin >> numero3;
    
    double promedio = calcularPromedio(numero1, numero2, numero3);
    
    cout << "El promedio de los tres números es: " << promedio << endl;

    return 0;
}
