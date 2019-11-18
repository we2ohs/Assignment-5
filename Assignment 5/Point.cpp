/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.cpp
 * Author: nikol
 * 
 * Created on November 17, 2019, 5:42 PM
 */

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
//Print Function
void Point::print()
{
    cout<<"x coordinate: "<<getx()<<endl;
    cout<<"y coordinate: "<<gety()<<endl;
}