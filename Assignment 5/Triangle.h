//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
#include "Point.h"
class Triangle:public Shape
{
private:
    Point p1;
    Point p2;
    Point p3;
    
public:
    //Constructors
    Triangle();
    Triangle(Point,Point,Point);
    
    //Destructor
    ~Triangle();
    
    //Set Functions
    void setp1(Point);
    void setp2(Point);
    void setp3(Point);
    
    //Get Functions
    Point getp1() const;
    Point getp2() const;
    Point getp3() const;
    
    //Print Function
    void print();

};
#endif /* TRIANGLE_H */

