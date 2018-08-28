#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    cin >> b;

    if (a > b)
    {
        cout << "El mayor es: " << a << endl;
        cout << "El menor es: " << b << endl;
    }
    else
    {
        cout << "El mayor es: " << b << endl;
        cout << "El menor es: " << a << endl;
    }
    return 0;
}
