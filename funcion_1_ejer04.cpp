//4) Diseñe la función que calcula el resultado de:  x / (1 + x^2) (Realizado en clases)

#include<iostream>
using namespace std;

double calcularResultado(double x) 
{
    return x / (1 + x * x);
}

int main() {
    double x;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    double resultado = calcularResultado(x);
    cout << "El resultado es: " << resultado << endl;

    return 0;
}