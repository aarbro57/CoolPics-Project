/**
 * Point.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <Aaron Brown>
 * <aarbro>
 *
 * <Contains functions of Point class to access points in display>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int xVal, int yVal) {
    x = checkRange(xVal);
    y = checkRange(yVal);
}

void Point::setX(int xVal) {
    x = checkRange(xVal);
    return;
}

int Point::getX() {
    return x;
}

void Point::setY(int yVal) {
    y = checkRange(yVal);
    return;
}

int Point::getY() {
    return y;
}

void Point::read(istream& ins) {
    //j accounts for the symbols between the numbers to keep the istream good
    char j;
    if (ins.good()) {
        ins >> j >> x >> j >> y >> j;
    }
    x = checkRange(x);
    y = checkRange(y);
    return;
}

void Point::write(ostream& outs) {
    if (outs.good()) {
        outs << "(" << checkRange(x) << "," << checkRange(y) << ")";
    }
    return;
}

int Point::checkRange(int val) {
    if (val >= 0 && val < DIMENSION) {
        return val;
    }
    else if (val < 0) {
        return 0;
    }
    else if (val > DIMENSION) {
        return DIMENSION - 1;
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}
