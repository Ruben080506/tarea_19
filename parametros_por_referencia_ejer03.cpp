//3) Funciones que reciben parámetros por referencia. (Realizado en clases)

#include<iostream>

using namespace std;

int pasoreferencia(int &a)
{
    a = a * 100;
    cout << endl << "El valor de la variable dentro de la función es: " << endl;

    return a;
}

int main()
{
    int a = 2;
    cout << endl << "Ejemplo de paso de parámetros por referencia" << endl;
    cout << endl << "El valor de la variable antes de llamar a la función es: " << a;
    pasoreferencia(a);
    cout << endl << "El valor de la variable después de la llamada a la función es: " << a;
    return 0;
}