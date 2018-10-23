#include <iostream>
#include "Point.h"

///constructor = metodo que se invoca cuando se crea una instancia

using namespace std;

int main()
{
    Point p;
    Point q(6,7);
    p.print();
    q.print();

    ///Point.p(Point 5);
    p.print();

    return 0;
}
