#include <iostream>

using namespace std;

//implemente un programa que solicite un numero y que diga si es Mayuscukla o on

int caracter3()
{
    int a;
    cin >> a;
    a = static_cast<char>(a);
    if (91 > a > 64)
        cout << "Es mayuscula" << endl;
    if (123 > a > 96)
        cout << "Es minuscula";
    return 0;
}

//Implemente un prgrma qu solicite dos caracteres en numeros por teclado e imprima la suma dwe los dos

int caracter2()
{
    int n,m;
    char a,b;
    cin >> a >> b;
    n = static_cast<int>(a);
    m = static_cast<int>(b);
    cout << n + m << endl;
    return 0;
}

int caracter()
{
    char d;
    cin >> d;
    int n = static_cast<int>(d);
    if ((n > 64 && n < 91) || (n > 96 && n< 123))
        cout << "Es una letra"<< endl;
    else
        cout << "No es letra" << endl;
    return 0;
}

int main()
{
    char var;
    /*cout << "Ingrese un caracter: " << endl;
    cin >> var;
    cout << var << endl;
    cout << static_cast<int>(var) << endl;*/
    //cout << caracter() << endl;
    cout << caracter3() << endl;
    return 0;
}
