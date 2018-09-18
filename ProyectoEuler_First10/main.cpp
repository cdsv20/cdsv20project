#include <iostream>

using namespace std;

int primero()
{
    int suma = 0;
    for (int i = 999;i > 0;i--)
    {
        if (i % 3 == 0 || i % 5 == 0)
            suma += i;
    }
    return suma;
}

long long segundo(long long n)
{
    long long a = 0,b = 1,suma,res = 0;
    for(long long i = 0;i < n;i++)
    {
        suma = a + b;
        a = b;
        b = suma;
        res += suma;
    }
    return suma;


}

int main()
{
    cout << primero() << endl;
    cout << segundo(4000000) << endl;
    return 0;
}
