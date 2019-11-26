//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Point.cpp

#include "Point.h"
#include <iostream>
using namespace std;
//Constructors implementations
Point::Point() 
{
    
}

Point::Point(double x,double y) 
{
    x_coor=x;
    y_coor=y;
}

//Destructor
Point::~Point() 
{
    
}

//Set Functions
void Point::setx(double x)
{
    x_coor=x;
}

void Point::sety(double y)
{
    y_coor=y;
}

//Get Functions
double Point::getx() const
{
    return x_coor;
}

double Point::gety() const
{
    return y_coor;
}

//Overloaded Assignment Operator
Point* Point::operator=(Point a)
{
    setx(a.getx());
    sety(a.gety());
    return this;
}


//Print Function
void Point::print()
{
    cout<<"x coordinate: "<<getx()<<endl;
    cout<<"y coordinate: "<<gety()<<endl;
}
