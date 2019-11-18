/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.h
 * Author: nikol
 *
 * Created on November 17, 2019, 6:13 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Point.h"
class Circle:public Shape
{
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
    //Print Function
    void print();
private:
    Point p;
    double radius;
};
#endif /* CIRCLE_H */

