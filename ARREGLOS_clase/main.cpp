#include <iostream>

using namespace std;

int suma(int arr[],int x)
{
    int res = 0;
    for (int i = 0;i < x;i++)
        res += arr[i];
    return res;
}

int mayor(const int arr[], int x)
{
    int mayor = 0;
    for (int i = 0;i < x;i++)
        if(mayor < arr[i])
            mayor = arr[i];
    return mayor;
}

int primo(int arr[],int x)
{
    int cont = 0;
    for (int i = 0;i < x;i++)
        for (int j=i+1;j < x;j++)
            if (arr[i] % j != 0)
                cont += 1;
    return cont;
}

int main()
{
    int arr[]={29,13,3,7,5};
    cout << "la suma de este arreglo es: " << suma(arr,5) << endl;
    cout << "el mayor de este arreglo es: " << mayor(arr,5) << endl;
    cout << "la cantidad de primos en este arreglo es: " << primo(arr,5) << endl;
    return 0;
}
