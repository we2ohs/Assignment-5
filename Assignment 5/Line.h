/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Line.h
 * Author: nikol
 *
 * Created on November 17, 2019, 5:52 PM
 */

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
    
    //Overloaded Assignment Operator
    void operator=(Line a);

    //Print Function
    void print();
};
#endif /* LINE_H */

