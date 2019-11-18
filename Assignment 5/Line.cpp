/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Line.cpp
 * Author: nikol
 * 
 * Created on November 17, 2019, 5:52 PM
 */

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
    cout<<"P1: "<<endl;
    p1.print();
    cout<<"P2: "<<endl;
    p2.print();
}