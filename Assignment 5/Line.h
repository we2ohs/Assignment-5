//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Line.h

#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include "Point.h"
class Line:public Shape
{
private:
    Point p1;
    Point p2;
    
public:
    //Constructors
    Line();
    Line(Point,Point);
    
    //Destructor
    ~Line();
    
    //Set Functions
    void setp1(Point);
    void setp2(Point);
    
    //Get Functions
    Point getp1() const;
    Point getp2() const;

    //Print Function
    void print();
};
#endif /* LINE_H */

