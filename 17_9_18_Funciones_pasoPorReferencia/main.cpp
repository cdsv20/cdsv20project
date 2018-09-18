#include <iostream>

using namespace std;

void intercambio(int & a, int & b)

//const ?¡¡??¡?

{
    int temp = a;
    a = b;
    b = temp;
}

bool isPotencia2 (int n)
{
    return !(n & (n-1));
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fibonacci(n - 2) + fibonacci(n - 1);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int forfactorial(int n)
{
    int res = 1;
    for (int i = 1;i <= n;i++)
        res *= i;
    return res;
}

int main()
{
    //long long z = 1231231231232112231;
    int x = 5, y = 6;
    //cout << x << " " << y << endl;
    intercambio(x,y);
    //cout << isPotencia2(1024);
    cout << factorial(6) << endl;
    cout << forfactorial(6) << endl;
    //cout << x << " " << y << endl;
    //cout << z;
    return 0;
}
