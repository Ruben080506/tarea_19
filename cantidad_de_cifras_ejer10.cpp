/*10) Diseñe la función que determina la cantidad de cifras que tiene un número entero - este entero pasa como parámetro. Por ejemplo:
si el número es 12 tiene 2 cifras

si el número es 157 tiene 3 cifras

si el número es 999 tiene 3 cifras

si el número es 15000 tiene 5 cifras. 

si el número es -145 tiene 3 cifras

*/

#include <iostream>
#include <cmath>

using namespace std;

int contarCifras(int numero) {
    return to_string(abs(numero)).length();
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int cantidadCifras = contarCifras(numero);

    cout << "El número " << numero << " tiene " << cantidadCifras << " cifra(s)." << endl;

    return 0;
}