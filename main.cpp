#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

#include "Point.h"
using namespace std;


int main() {
    Point point1(5.5, 8.5);
    Point point2(10,15);
    Point midpoint = point1/point2;
    cout << "The Distance Between Point 1 and Point 2 are:" << point1 - point2 << endl;
    cout << "Are Point 1 and Point 2 Equal? ";
    if(point1 == point2) {
        cout << "Points are equal";
    }else {
        cout << "Points are not equal";
    }
    cout << endl;
    cout << "The midpoint is:";
    midpoint.print();
    cout << endl;

    //Tests
    assert((point1-point2) == sqrt(::pow(10 - 5.5, 2) + pow(15 - 8.5, 2)));
    assert(!(point1 == point2));
    assert(midpoint.getX() == (5.5 + 10) / 2);
    assert(midpoint.getY() == (8.5 + 15) / 2);
    cout << "All Tests Pass!" << endl;
    return 0;
}
