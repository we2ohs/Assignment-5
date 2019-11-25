/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangle.cpp
 * Author: nikol
 * 
 * Created on November 17, 2019, 6:05 PM
 */

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

//Overloaded Assignment Operator
void Triangle::operator=(Triangle a)
{
    setp1(a.getp1());
    setp2(a.getp2());
    setp3(a.getp3());
}

//Print Function
void Triangle::print()
{
    cout<<"P1: "<<endl;
    p1.print();
    cout<<"P2: "<<endl;
    p2.print();
    cout<<"P3: "<<endl;
    p3.print();
}
