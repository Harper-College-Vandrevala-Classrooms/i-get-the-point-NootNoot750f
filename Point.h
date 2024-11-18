//
// Created by nickh on 11/17/2024.
//

#ifndef POINT_H
#define POINT_H



class Point {
public:
    Point(double x, double y);

    double getX() const;
    double getY() const;

    double operator-(const Point& other) const;
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    Point operator/(const Point& other) const;

    void print() const;

private:
    double x;
    double y;
};



#endif //POINT_H
