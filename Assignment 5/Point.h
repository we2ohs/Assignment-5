//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Point.h

#ifndef POINT_H
#define POINT_H
#include "Shape.h"
class Point:public Shape
{
private:
    double x_coor;
    double y_coor;
    
public:
    //Constructors
    Point();
    Point(double, double);
    
    //Destructor
    ~Point();
    
    //Set Functions
    void setx(double);
    void sety(double);
    
    //Get Functions
    double getx() const;
    double gety() const;
    
    //Print Function
    void print();
};
#endif /* POINT_H */

