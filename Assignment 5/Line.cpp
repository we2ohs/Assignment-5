//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Line.cpp

#include "Line.h"
#include <iostream>
using namespace std;
//Constructors
Line::Line() 
{
    
}

Line::Line(Point i,Point j)
{
    p1=i;
    p2=j;
}
//Destructor
Line::~Line()
{
}


//Set Functions
void Line::setp1(Point i)
{
    p1=i;
}

void Line::setp2(Point j)
{
    p2=j;
}


//Get Functions
Point Line::getp1() const
{
    return p1;
}

Point Line::getp2() const
{
    return p2;
}

//Print Function
void Line::print()
{
    cout<<"Line Point 1 - "<<endl;
    p1.print();cout<<endl;
    cout<<"Line Point 2 - "<<endl;
    p2.print();cout<<endl;
}
