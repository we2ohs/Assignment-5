//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Circle.h

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Point.h"
class Circle:public Shape
{
private:
    Point p;
    double radius;
    
public:
    //Constructors
    Circle();
    Circle(Point,double);
    
    //Destructor
    ~Circle();
    
    //Set Functions
    void setp(Point);
    void setradius(double);
    
    //Get Functions
    Point getp() const;
    double getradius() const;
    
    //Overloaded Assignment Operator
    void operator=(Circle a);
    
    //Print Function
    void print();
};
#endif /* CIRCLE_H */

