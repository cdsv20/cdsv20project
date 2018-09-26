#include <iostream>

using namespace std;

void swap_(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swapByPtr(int *ptr1,int *ptr2)
{
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

bool anhio_bisiesto(int *anhio)
{
    return (*anhio == 365);
}

int primo(int *p)
{
    for (int i = 2;i < *p;i++)
        if (!(*p % i))
            return 0;
    return 1;
}

int main()
{
    int a = 6,b =36;
    swap_(a,b);
    cout << a << " " << b << endl;
    swapByPtr(&a,&b);
    cout << a << " " << b << endl;
    cout << anhio_bisiesto(&b) << endl;
    cout << primo(&a);
    return 0;
}
