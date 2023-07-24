//2) Funciones que reciben parámetros por valor. (Realizado en clases)

#include<iostream>

using namespace std;

int pasovalor(int a)
{
    a = a * 100;
    cout << endl << "El valor de la variable es: " << a;
    return a;
}

int main()
{
    int x = 2;
    cout << endl << "Paso de parámetros por valor" << endl;
    cout << "El valor de la variable antes de llamar a la función: " << x;

    pasovalor(x);
    cout << endl << "El valor de la variable después de la llamada de la función es: " << x;

    return 0;
}