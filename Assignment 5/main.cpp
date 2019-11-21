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
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;



int main()
{
    
//======================== Part i ========================
    //Point Objects
    Point p1(4.3,3.2);
    Point p2(9.3,4.7);
    Point p3(5.8,7.3);
    Point p(2.5,8.4);
    
    //Line Object
    Line line(p1,p2);
    
    //Triangle Object
    Triangle triangle(p1,p2,p3);
    
    //Circle Object
    Circle circle(p,2.9);

    
//======================== Part ii ========================
    //Sequential Access File object
    fstream file("objects.txt", fstream::in|fstream::out|fstream::app);
    
    if(!file)
    {
        cout<<"File could not be opened"<<endl;
        exit(1);
    }
    
    string classname[7];
    classname[0]=typeid(p1).name();
    classname[1]=typeid(p2).name();
    classname[2]=typeid(p3).name();
    classname[3]=typeid(p).name();
    classname[4]=typeid(line).name();
    classname[5]=typeid(triangle).name();
    classname[6]=typeid(circle).name();
    
    for(int i = 0; i<7;i++)
    {
        classname[i].erase(0,1);
    }
    
    
    file<<classname[0]<<" "<<p1.getx()<<" "<<p1.gety()<<endl;
    file<<classname[1]<<" "<<p2.gety()<<" "<<p2.gety()<<endl;
    file<<classname[2]<<" "<<line.getp1().getx()<<" "<<line.getp1().gety()<<" "<<line.getp2().getx()<<" "<<line.getp2().gety()<<endl;
    file<<classname[3]<<" "<<p3.getx()<<" "<<p3.gety()<<endl;
    file<<classname[4]<<" "<<triangle.getp1().getx()<<" "<<triangle.getp1().gety()<<" "<<triangle.getp2().getx()<<" "<<triangle.getp2().gety()<<" "<<triangle.getp3().getx()<<" "<<triangle.getp3().gety()<<endl;
    file<<classname[5]<<" "<<p.getx()<<" "<<p.gety()<<endl;
    file<<classname[6]<<" "<<circle.getp().getx()<<" "<<circle.getp().gety()<<" "<<circle.getradius()<<endl;

    file.close();
 
    
//======================== Part iii ========================
    Shape* shape[7];
    
    for(int i = 0 ; i<7; i++)
    {
        shape[i]=nullptr;
    }
 
    
//======================== Part iv ========================
    file.open("objects.txt");
    string data[30];
    double temp=0.0;
    
    
    while(!file.eof())
    {
        for(int i = 0; i<1; i++)
        {
            
        
        }
        
    }
    
    
 
    
    
    file.close();
    
    
    
    
    return 0;
}

