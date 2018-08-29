#include <iostream>

using namespace std;

// PRINT SUMA, PROMEDIO, PRODUCTO, EL MAYOR Y EL MENOR

int main()
{
    int a,b,c,suma,promedio,producto,mayor,menor;
    cin >> a >> b >> c;
    suma = a + b + c;
    promedio = (a + b + c)/3;
    producto = a * b * c;
    mayor = a;

    if (b > mayor)
        mayor = b;
    if (c > mayor)
        mayor = c;
    cout << "suma: " << suma << endl << "promedio: " << promedio << endl << "producto: " << producto << endl;
    cout << "mayor: " << mayor << endl <</* "menor: " << menor*/;
    return 0;
}
// least program failed
// escribe un programa que ingres un int y determine si es par o impar
