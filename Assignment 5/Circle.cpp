//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Circle.cpp

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


//Print Function
void Circle::print()
{
    cout<<"Circle Point - "<<endl;
    p.print();cout<<endl;
    cout<<"Circle Radius: "<<getradius()<<endl;
}
