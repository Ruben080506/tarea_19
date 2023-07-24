
//1) Diseñe la función que calcula el factorial de un entero. (Realizado en clases)



#include <iostream>

using namespace std;

int factorial(int num) {
    int fac = 1;
    if (num < 0) {
        fac = -1;
    } else if (num == 0) {
        fac = 1;
    } else {
        for (int i = 1; i <= num; i++) {
            fac *= i;
        }
    }
    return fac;
}

int main() {
    cout << endl << "CALCULO DEL FACTORIAL DE UN NUMERO" << endl << "======================================" << endl;
    cout << endl << "El factorial de 5 es: " << factorial(5);
    cout << endl << "El factorial de 7 es: " << factorial(7);
    cout << endl << "El factorial de 0 es: " << factorial(0);
    cout << endl << "El factorial de 1 es: " << factorial(1);
    cout << endl << "El factorial de -4 es: " << factorial(-4);
    cout << endl << "El factorial de 6 es: " << factorial(6);
    cout << endl << "El factorial de 10 es: " << factorial(10);
    cout << endl << "El factorial de 30 es: " << factorial(30);
    return 0;
}
