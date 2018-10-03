#include <iostream>

using namespace std;

int main()
{
    int x = 10,y = 20,z = 30;
    int *arr[3]; //puntero de puntero
    arr[0] = &x;
    arr[1] = &y;
    arr[2] = &z;
    int **ptr = arr;
    cout << *arr << " = " << &x <<  " "<< *ptr << endl;
    cout << --(**ptr) << " = " << &x << endl;
    //declaramos otro puntero para recorrer el arreglo ya que el arreglo es siempre constante y no se puede modificar con ++(*arr)
    cout << &y << endl;
    /*for (int i = 0;i < 3;i++)
        cout << *arr[i] << endl;*/
    return 0;
}
