#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend Point caldis(Point P, Point Q);

    Point(Point o1, Point o2)
    {
        caldis(o1, o2);
    }

    void displayPoint()
    {
        cout << "The Coords are (" << x << "," << y << ")" << endl;
    }
};

Point caldis(Point A, Point B)
{

    int X = pow(B.x - A.x, 2);
    int Y = pow(B.y - A.y, 2);

    float Dis = sqrt(X + Y);

    cout << "The Distance Between Two Points is " << Dis << endl;
}

int main()
{
    Point p(1, 0);
    Point q(70, 6);

    p.displayPoint();
    q.displayPoint();

    Point caldis(p, q);
}

// Make a function which takes 2 point objects and compute the distance between them.
// catch is that you may have to make a friend function .

// Quiz Completed ......
