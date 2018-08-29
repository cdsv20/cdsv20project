#include <iostream>

using namespace std;

// PRINT SUMA, PROMEDIO, PRODUCTO, EL MAYOR Y EL MENOR

int main()
{
    int a,b,c,suma,producto,mayor,menor;
    float promedio;
    cin >> a >> b >> c;
    suma = a + b + c;
    promedio = (a + b + c)/3.0;
    producto = a * b * c;

    if (a > b && b > c)
    {
        mayor = a;
        menor = c
    }
    if (c > mayor)
        mayor = c;
    cout << "suma: " << suma << endl << "promedio: " << promedio << endl << "producto: " << producto << endl;
    cout << "mayor: " << mayor << endl <</* "menor: " << menor*/;
    return 0;
}
// least program failed:?¡?¡?¡?¡?¡?¡??¡?¡?¡
// escribe un programa que ingres un int y determine si es par o impar
