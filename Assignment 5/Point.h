/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.h
 * Author: nikol
 *
 * Created on November 17, 2019, 5:42 PM
 */

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
    
    //Overloaded Assignment Operator
    Point* operator=(Point a);
    
    //Print Function
    void print();
};
#endif /* POINT_H */

