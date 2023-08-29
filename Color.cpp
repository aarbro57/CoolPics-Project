/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <Aaron Brown>
 * <aarbro>
 *
 * <Contains functions of Color class, which are necessary to color all shapes>
 */

#include "Color.h"


int checkRange(int val) {
    int DIMENSION = 100;
    if (val < 0) {
        return 0;
    }
    else if (val > DIMENSION) {
        return DIMENSION;
    }
    else {
        return val;
    }
}
Color::Color() {
    red = 0;
    green = 0;
    blue = 0;
}

Color::Color(int redVal, int greenVal, int blueVal) {
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
}

void Color::setRed(int redVal) {
    red = checkRange(redVal);
}

int Color::getRed() {
    return red;
}

void Color::setGreen(int greenVal) {
    green = checkRange(greenVal);
}

int Color::getGreen() {
    return green;
}

void Color::setBlue(int blueVal) {
    blue = checkRange(blueVal);
}

int Color::getBlue() {
    return blue;
}

void Color::read(istream& ins) {
    if (ins.good()) {
        ins >> red >> green >> blue;
    }
    setRed(red);
    setGreen(green);
    setBlue(blue);
}

void Color::write(ostream& outs) {
    if (outs.good()) {
        outs << red << " " << green << " " << blue << endl;
    }
}

int Color::checkRange(int val) {
    int COLOR = 255;
    if (val < 0) {
        return 0;
    }
    else if (val > COLOR) {
        return COLOR;
    }
    else {
        return val;
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
