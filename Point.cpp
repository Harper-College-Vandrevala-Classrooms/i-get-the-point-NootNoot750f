

#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;
Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::operator-(const Point &other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

bool Point::operator==(const Point &other) const {
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point &other) const {
    return x != other.x || y != other.y;
}

Point Point::operator/(const Point &other) const {
    double midX = (x + other.x) / 2;
    double midY = (y + other.y) / 2;
    return Point(midX, midY);
}
void Point::print() const {
    cout << "(" << x << ", " << y << ")";
}

