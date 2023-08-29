/**
 * test.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * <Aaron Brown>
 * <aarbro>
 *
 * Contains functions for testing all classes in the project. 
 */

#include "Graphics.h"
#include "Circle.h"
#include "Color.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

#include <iostream>
#include <fstream>

using namespace std;


void test_Circle();
void test_Color();
void test_Line();
void test_Point();
void test_Rectangle();
void test_Triangle();

void startTests() {
   test_Point();
   test_Color();
   test_Line();
   test_Circle();
   test_Rectangle();
   test_Triangle();
    // call other test functions here
    
    return;
}

void test_Point() {
    // test of default constructor
    Point p1;
    cout << "Expected: (0,0), actual: " << p1 << endl;
    
    // test of the non-default constructor
    Point p2(3, 9);
    cout << "Expected: (3,9), actual: " << p2 << endl;

    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);

    // test of member functions getX() and getY()
    cout << "Expected: (5,3), actual: ";
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    
    return;
}

void test_Color() {
    cout << "Now testing Color" << endl;
    
    //test of default constructor
    cout << "Testing default constructor:" << endl;
    Color color1;
    cout << "expected 0 0 0 actual: " << color1 << endl;

    //test of non-default constructor
    cout << "Testing non-default constructor:" << endl;
    Color color2(25, 100, 78);
    cout << "expected 25 100 78 actual: " << color2 << endl;
    Color color3(0, 256, -5);
    cout << "expected 0 255 0 actual: " << color3 << endl;

    //test of setRed
    cout << "Testing setRed: " << endl;
    color1.setRed(9);
    cout << "expected 9 0 0 actual: " << color1 << endl;
    color1.setRed(300);
    cout << "expected 255 0 0 actual: " << color1 << endl;
    color1.setRed(-5);
    cout << "expected 0 0 0 actual: " << color1 << endl;

    // test getRed
    cout << "Testing getRed:" << endl;
    cout << "expected 25 actual: " << color2.getRed() << endl;
    cout << "expected 0 actual: " << color1.getRed() << endl;

    //test setBlue
    cout << "testing setBlue:" << endl;
    color1.setBlue(256);
    cout << "expected 0 0 255 actual: " << color1 << endl;
    color1.setBlue(67);
    cout << "expected 0 0 67 actual: " << color1 << endl;
    color1.setBlue(-4);
    cout << "expected 0 0 0 actual: " << color1 << endl;

    //test getBlue
    cout << "testing getBlue" << endl;
    cout << "expected 78 actual: " << color2.getBlue() << endl;
    cout << "expected 0 actual: " << color1.getBlue() << endl;

    //test setGreen
    cout << "testing setGreen" << endl;
    color1.setGreen(500);
    cout << "expected 0 255 0 actual: " << color1 << endl;
    color1.setGreen(245);
    cout << "expected 0 245 0 actual: " << color1 << endl;
    color1.setGreen(-4);
    cout << "expected 0 0 0 actual: " << color1 << endl;

    //test getGreen
    cout << "testing getGreen" << endl;
    cout << "expected 100 actual: " << color2.getGreen() << endl;
    cout << "expected 0 actual: " << color1.getGreen() << endl;

}


void test_Line() {
    cout << "Now testing Line" << endl;
    //testing constructors
    Point pt3;
    Point pt4(1, 1);
    Color col1;
    Line one;
    Line two(pt3, pt4, col1);
    cout << "Testing Constructors: " << endl;
    cout << "expected 0 0 1 1 0 0 0 actual: " << two << endl;
    
    //testing setStart
    cout << "Now testing setStart" << endl;
    Point pt1;
    one.setStart(pt1);
    
    Point pt2(45, 65);
    two.setStart(pt2);
    

    //testing getStart
    cout << "Now testing getStart" << endl;
    cout << "expected 0 0 actual: " << one.getStart() << endl;
    cout << "expected 45 65 actual: " << two.getStart() << endl;

    //testing setEnd
    cout << "Now testing setEnd" << endl;
    one.setEnd(pt2);
    two.setEnd(pt1);

    //testing getEnd
    cout << "Now testing getEnd" << endl;
    cout << "expected 45 65 actual: " << one.getEnd() << endl;
    cout << "expected 0 0 actual: " << two.getEnd() << endl;

    //testing setColor
    cout << "Now testing setColor" << endl;
    Color col2(255, 255, 255);
    one.setColor(col1);
    two.setColor(col2);

    //testing getColor
    cout << "Now testing getColor" << endl;
    cout << "expected 0 0 0 actual: " << one.getColor() << endl;
    cout << "expected 255 255 255 actual: " << two.getColor() << endl;
    


}
void test_Triangle() {
    cout << "Now testing Triangle" << endl;
   
    //Testing constructors
    cout << "Testing constructors" << endl;
    Point pt1;
    Point pt2(1, 1);
    Point pt3(2, 2);
    Color col1;
    Color col2(255, 255, 255);
    Color col3(0, 0, 255);
    Triangle tri1;
    Triangle tri2(pt1, pt2, pt3, col1);
    Triangle tri3(pt1, col1, pt2, col2, pt3, col3);
    cout << "expected 0 0 1 1 2 2 0 0 0 actual: " << tri2 << endl;
    cout << "expected 0 0 0 0 0 1 1 255 255 255 2 2 0 0 255 actual: " << tri3 << endl;
    
    //Testing setColor
    tri1.setColor(col1);
    tri2.setColor(col2);

    //testing setVertexOne
    pt1.setX(99);
    pt1.setY(0);
    tri1.setVertexOne(pt1);
    pt2.setX(65);
    pt2.setY(87);
    tri2.setVertexOne(pt2);
    
    //testing getVertexOne
    cout << "Testing getVertexOne" << endl;
    cout << "expecting 99 0 actual: "  << tri1.getVertexOne() << endl;
    cout << "expecting 65 87 actual: " << tri2.getVertexOne() << endl;

    //testing setVertexOneColor
    col1.setRed(255);
    tri1.setVertexOneColor(col1);
    col2.setGreen(88);
    tri2.setVertexOneColor(col2);

    // testing getVertexOnceColor
    cout << "Testing getVertexOneColor" << endl;
    cout << "expecting 255 0 0 actual: " << tri1.getVertexOneColor() << endl;
    cout << "expecting 0 88 0 actual: " << tri2.getVertexOneColor() << endl;

    //Testing setVertexTwo
    pt1.setX(55);
    pt1.setY(4);
    tri1.setVertexTwo(pt1);
    pt2.setX(99);
    pt2.setY(99);
    tri2.setVertexTwo(pt2);

    //testing getVertexTwo
    cout << "Now testing getVertexTwo" << endl;
    cout << "expected 55 4 actual: " << tri1.getVertexTwo() << endl;
    cout << "expected 99 99 actual: " << tri2.getVertexTwo() << endl;

    //testing setVertexTwoColor
    col1.setBlue(255);
    col1.setGreen(255);
    col2.setRed(0);
    col2.setGreen(0);
    col2.setGreen(0);
    tri1.setVertexTwoColor(col1);
    tri2.setVertexTwoColor(col2);

    //Testing getVertexTwoColor
    cout << "New testing GetVertexTwoColor" << endl;
    cout << "expected 255 255 255 actual: " << tri1.getVertexTwoColor() << endl;
    cout << "expected 0 0 0 actual: " << tri2.getVertexTwoColor() << endl;

    //testing setVertexThree
    pt3.setX(0);
    pt3.setY(67);
    tri1.setVertexThree(pt3);
    pt1.setX(89);
    pt1.setY(0);
    tri2.setVertexThree(pt1);

    //testing getVertexThree
    cout << "now tesing getVertexThree" << endl;
    cout << "Expected 0 67 actual: " << tri1.getVertexThree() << endl;
    cout << "expected 89 0 actual; " << tri2.getVertexThree() << endl;

    //testing setVertexThreeColor
    tri1.setVertexThreeColor(col1);
    tri2.setVertexThreeColor(col2);

    //testing getVertexThreeColor
    cout << "now testing getVertexThreeColor" << endl;
    cout << "expected 255 255 255 actual: " << tri1.getVertexThreeColor() << endl;
    cout << "expected 0 0 0 actual: " << tri2.getVertexThreeColor() << endl;

    //TODO: test input and output
}
void test_Circle() {
    cout << "Now testing Circle" << endl;

    cout << "Now testing Constructors" << endl;
    Point pt1;
    Point pt2(5, 5);
    Color col1(0, 0, 0);
    Color col2(255, 255, 255);
    Circle cir1;
    Circle cir2(pt1, 5, col1);
    cout << "expected 0 0 5 0 0 0 actual: " << cir2 << endl;

    cout << "Now testing setCenter" << endl;
    pt1.setX(10);
    pt1.setY(10);
    cir2.setCenter(pt1);
    cir1.setCenter(pt2);
    cout << "Now testing getCenter" << endl;
    cout << "Expected 10 10 actual: " << cir2.getCenter() << endl;
    cout << "Expected 5 5 actual: " << cir1.getCenter() << endl;
    cout << "Now testing setRadius" << endl;
    cir1.setRadius(-9);
    cir2.setRadius(-1);
    cout << "Now testing getRadius" << endl;
    cout << "expected 9 actual: " << cir1.getRadius() << endl;
    cout << "expected 1 actual: " << cir2.getRadius() << endl;
    cout << "Now testing setColor" << endl;
    cir1.setColor(col1);
    cir2.setColor(col2);
    cout << "Now testing getColor" << endl;
    cout << "expected 0 0 0 actual: " << cir1.getColor() << endl;
    cout << "expected 255 255 255 actual: " << cir2.getColor() << endl;
}
void test_Rectangle() {
    cout << "Now testing Rectangle" << endl;
    cout << "Now testing constructors" << endl;
    Point pt1(55, 46);
    Point pt2(33, 65);
    Point pt3(0, 0);
    Point pt4(5, 5);
    Color col1(0, 0, 0);
    Color col2(255, 255, 255);
    Color col3(255, 0, 0);
    Color col4(0, 0, 255);
    Color col5(0, 255, 0);
    Rectangle rec1;
    Rectangle rec2(pt1, pt2, col2);
    Rectangle rec3(pt1, pt2, col1, col2, col3, col4);
    cout << "expected 55 46 33 65 0 0 0 255 255 255 255 0 0 0 0 255 actual: "  << rec3 << endl;
    cout << "expected 55 46 33 65 255 255 255 actual: " << rec2 << endl;

    cout << "Now testing setStert" << endl;
    rec1.setStart(pt1);
    rec2.setStart(pt2);

    cout << "Now testing getStart" << endl;
    cout << "expected 55 46 actual: " << rec1.getStart() << endl;
    cout << "expected 33 65 actual: " << rec2.getStart() << endl;

    cout << "Now testing setEnd" << endl;
    rec1.setEnd(pt3);
    rec2.setEnd(pt4);

    cout << "Now testing getEnd" << endl;
    cout << "expected 0 0 actual: " << rec1.getEnd() << endl;
    cout << "expected 5 5 actual: " << rec2.getEnd() << endl;

    cout << "Now testing setColor" << endl;
    rec3.setColor(col5);

    cout << "Now testing setColorTopLeft" << endl;
    rec1.setColorTopLeft(col1);
    rec2.setColorTopLeft(col4);

    cout << "Now testing getColorTopLeft" << endl;
    cout << "Expected 0 0 0 actual " << rec1.getColorTopLeft() << endl;
    cout << "Expected 0 0 255 actual " << rec2.getColorTopLeft() << endl;
    cout << "Expected 0 255 0 actual " << rec3.getColorTopLeft() << endl;

    cout << "Now testing setColorTopRight" << endl;
    rec1.setColorTopRight(col2);
    rec2.setColorTopRight(col3);

    cout << "Now testing getColorTopRight" << endl;
    cout << "expecting 255 255 255 actual " << rec1.getColorTopRight() << endl;
    cout << "expecting 255 0 0 actual " << rec2.getColorTopRight() << endl;
    cout << "Expected 0 255 0 actual " << rec3.getColorTopRight() << endl;

    cout << "Now testing setColorBottomRight" << endl;
    rec1.setColorBottomRight(col3);
    rec2.setColorBottomRight(col2);

    cout << "Now testing getColorBottomRight" << endl;
    cout << "expected 255 0 0 actual " << rec1.getColorBottomRight() << endl;
    cout << "expected 255 255 255 actual " << rec2.getColorBottomRight() << endl;
    cout << "Expected 0 255 0 actual " << rec3.getColorBottomRight() << endl;

    cout << "Now testing setColorBottomLeft" << endl;
    rec1.setColorBottomLeft(col4);
    rec2.setColorBottomLeft(col1);

    cout << "Now testing getColorBottomLeft" << endl;
    cout << "expected 0 0 255 actual " << rec1.getColorBottomLeft() << endl;
    cout << "expected 0 0 0 actual " << rec2.getColorBottomLeft() << endl;
    cout << "Expected 0 255 0 actual " << rec3.getColorBottomLeft() << endl;


}

