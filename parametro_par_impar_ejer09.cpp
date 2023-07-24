//9) Escriba la función que determina si un número pasado como parámetro es par o impar.

#include <iostream>
using namespace std;

bool esPar(int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (esPar(numero)) {
        cout << numero << " es un número par.";
    } else {
        cout << numero << " es un número impar.";
    }
    
    return 0;
}
