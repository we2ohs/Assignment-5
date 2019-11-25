/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.cpp
 * Author: nikol
 * 
 * Created on November 17, 2019, 6:13 PM
 */

#include "Circle.h"
#include <iostream>
using namespace std;
//Constructors
Circle::Circle() 
{
    
}
Circle::Circle(Point i, double r) 
{
    p=i;
    radius=r;
}
//Destructor
Circle::~Circle() 
{
    
}
//Set Functions
void Circle::setp(Point i)
{
    p=i;
}

void Circle::setradius(double r)
{
    radius=r;
}

//Get Functions
Point Circle::getp() const
{
    return p;
}

double Circle::getradius() const
{
    return radius;
}

//Overloaded Assignment Operator
void Circle::operator=(Circle a)
{
    setp(a.getp());
    setradius(a.getradius());
}

//Print Function
void Circle::print()
{
    cout<<"P: "<<endl;
    p.print();
    cout<<"Radius: "<<radius<<endl;
}
