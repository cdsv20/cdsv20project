#include <iostream>

using namespace std;

int main()
{
    int x = 10,y = 20,z = 30;
    int *arr[3];
    arr[0] = &x;
    arr[1] = &y;
    arr[2] = &z;
    int **ptr = arr;
    cout << *arr << " = " << &x <<  " "<< *ptr << endl;
    cout << --**ptr << " = " << &x << endl;

    cout << &y << endl;
    /*for (int i = 0;i < 3;i++)
        cout << *arr[i] << endl;*/
    return 0;
}
