/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nikol
 *
 * Created on November 17, 2019, 5:41 PM
 */

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;
int main()
{
    //Point Objects
    Point p1(4.1,3.2);
    Point p2(9.3,4.7);
    Point p3(5.8,7.3);
    Point p(2.5,8.4);
    
    //Line Object
    Line line(p1,p2);
    
    //Triangle Object
    Triangle triangle(p1,p2,p3);
    
    //Circle Object
    Circle circle(p,2.9);
    
    return 0;
}

