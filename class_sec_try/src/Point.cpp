#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(int xh ,int yh)
{
    x = xh;
    y = yh;
}

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(Point &o)
{
    x = o.y;
    y = o.x;
}

void Point::print()
{
    cout << "(" << x << " , " << y << ")" << endl;
}
