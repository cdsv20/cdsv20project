#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point();
        Point(int, int);
        Point(Point &o);
        void print();
    private:
        double x,y;
};

#endif // POINT_H
