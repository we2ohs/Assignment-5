//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Triangle.cpp

#include "Triangle.h"
#include <iostream>
using namespace std;
//Constructors
Triangle::Triangle() 
{
    
}

Triangle::Triangle(Point i,Point j,Point k) 
{
    p1=i;
    p2=j;
    p3=k;
}

//Destructor
Triangle::~Triangle() 
{
}

//Set Functions
void Triangle::setp1(Point i)
{
    p1=i;
}

void Triangle::setp2(Point j)
{
    p2=j;
}

void Triangle::setp3(Point k)
{
    p3=k;
}


//Get Functions
Point Triangle::getp1() const
{
    return p1;
}

Point Triangle::getp2() const
{
    return p2;
}

Point Triangle::getp3() const
{
    return p3;
}

//Print Function
void Triangle::print()
{
    cout<<"Triangle Point 1 - "<<endl;
    p1.print();cout<<endl;
    cout<<"Triangle Point 2 - "<<endl;
    p2.print();cout<<endl;
    cout<<"Triangle Point 3 - "<<endl;
    p3.print();cout<<endl;
}
