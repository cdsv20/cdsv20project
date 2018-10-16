#include <iostream>

using namespace std;

int *funcion()
{
    int *ptr = new int;
    *ptr = 5;
    return ptr;
}

int main()
{
    int *ptr;
    for(int i = 0;i < 10;i++)
    {
        ptr = funcion();
        cout << *ptr << endl;
        delete ptr;
    }
    return 0;
}
