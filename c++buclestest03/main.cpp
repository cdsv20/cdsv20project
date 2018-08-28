#include <iostream>

using namespace std;

int main()
{
    int cont = 1;
    /*while (cont <= 10)
        cout<<cont++<<endl;
    cont = 10;
    while (cont >= 1)
        cout<<cont--<<endl;*/
    cont = 1;
    while (cont <= 20)
    {
        cout<<cont<<endl;
        cont += 2;
    }
    cont = 101;
    while (cont <= 200)
    {
        cout<<cont<< " ";
        if (cont%5 == 0)
            cout<<endl;
        cont ++;
    }
    for (cont=1;cont <= 10;cont++)
        cout<<cont<<endl;

    for (cont=20;cont >= 0;cont-=2)
        cout<<cont<<endl;
}
