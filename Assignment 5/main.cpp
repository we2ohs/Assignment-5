//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  main.cpp

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

const size_t MAX_SHAPES=100;

template <class T> void inputToFile(T object, ofstream& file);
template <> void inputToFile<Point>(Point object, ofstream& file);
template <> void inputToFile<Line>(Line object, ofstream& file);
template <> void inputToFile<Triangle>(Triangle object, ofstream& file);
template <> void inputToFile<Circle>(Circle object, ofstream& file);



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
    ofstream writeToFile;
    ifstream readFromFile;
    writeToFile.open("objects.txt");
    
    inputToFile<Point>(p1, writeToFile);
    inputToFile<Point>(p2, writeToFile);
    inputToFile<Line>(line, writeToFile);
    inputToFile<Point>(p3, writeToFile);
    inputToFile<Triangle>(triangle, writeToFile);
    inputToFile<Point>(p, writeToFile);
    inputToFile<Circle>(circle, writeToFile);
    writeToFile.close();
    
    
    
    //======================== Part iii ========================
    Shape* shape[MAX_SHAPES];
    
    for(int i = 0; i<MAX_SHAPES; i++)
    {
        shape[i]=nullptr;
    }
    
    //======================== Part iv & v ========================
    readFromFile.open("objects.txt");
    string temp[100];
    double tempNumber[100];
    
    for(int j = 0; j<MAX_SHAPES ; j++)
    {
        if(shape[j] == nullptr)
        {
            if(!readFromFile.eof())
            {
                for(int i = 0; i<100;i++)
                {
                    readFromFile>>temp[i];
                }
                for(int i = 0; i<100; i++)
                {
                    if(temp[i] != "")
                    {
                        
                        if(temp[i]=="Point")
                        {
                            tempNumber[0]=atof(temp[i+1].c_str());
                            tempNumber[1]=atof(temp[i+2].c_str());
                            
                            shape[j]= new Point(tempNumber[0],tempNumber[1]);
                            cout<<"------ Point ------"<<endl;
                            shape[j]->print();
                            cout<<endl;
                            
                        }
                        else if(temp[i]=="Line")
                        {
                            tempNumber[0]=atof(temp[i+1].c_str());
                            tempNumber[1]=atof(temp[i+2].c_str());
                            tempNumber[2]=atof(temp[i+3].c_str());
                            tempNumber[3]=atof(temp[i+4].c_str());
                            
                            shape[j] = new Line(Point(tempNumber[0],tempNumber[1]),Point(tempNumber[2],tempNumber[3]));
                            cout<<"------ Line ------"<<endl;
                            shape[j]->print();
                            cout<<endl;
                            
                        }
                        else if(temp[i]=="Triangle")
                        {
                            tempNumber[0]=atof(temp[i+1].c_str());
                            tempNumber[1]=atof(temp[i+2].c_str());
                            tempNumber[2]=atof(temp[i+3].c_str());
                            tempNumber[3]=atof(temp[i+4].c_str());
                            tempNumber[4]=atof(temp[i+5].c_str());
                            tempNumber[5]=atof(temp[i+6].c_str());
                            
                            shape[j] = new Triangle(Point(tempNumber[0],tempNumber[1]),Point(tempNumber[2],tempNumber[3]),Point(tempNumber[4],tempNumber[5]));
                            cout<<"------ Triangle ------"<<endl;
                            shape[j]->print();
                            cout<<endl;
                            
                        }
                        else if(temp[i]=="Circle")
                        {
                            tempNumber[0]=atof(temp[i+1].c_str());
                            tempNumber[1]=atof(temp[i+2].c_str());
                            tempNumber[2]=atof(temp[i+3].c_str());
                            
                            
                            shape[j] = new Circle(Point(tempNumber[0],tempNumber[1]),tempNumber[2]);
                            cout<<"------ Circle ------"<<endl;
                            shape[j]->print();
                            cout<<endl;
                            
                        }
                        
                    }
                }
            }
        }
    }
    
    
    
    readFromFile.close();
    
    /* cout<<"EXCEPTION : "<<error.what()<<endl;
     cout<<"File could not be created/read/written"<<endl;
     writeToFile.clear();
     readFromFile.clear();
     exit(1);*/
    
    
    
    
    
    
    
    return 0;
}








//======================== TEMPLATE FUNCTIONS ========================
template <class T>
void inputToFile(T object, ofstream& file )
{
    cout<<"Shape Type is not Supported"<<endl;
}

template<> void inputToFile<Point>(Point temppoint, ofstream& file)
{
    string classname;
    classname=typeid(temppoint).name();
    classname.erase(0,1);
    file<<classname<<" "<<temppoint.getx()<<" "<<temppoint.gety()<<endl;
    
}

template<> void inputToFile<Line>(Line templine, ofstream& file)
{
    string classname;
    classname=typeid(templine).name();
    classname.erase(0,1);
    file<<classname<<" "<<templine.getp1().getx()<<" "<<templine.getp1().gety()<<" "<<templine.getp2().getx()<<" "<<templine.getp2().gety()<<endl;
    
}

template<> void inputToFile<Triangle>(Triangle temptriangle, ofstream& file)
{
    string classname;
    classname=typeid(temptriangle).name();
    classname.erase(0,1);
    file<<classname<<" "<<temptriangle.getp1().getx()<<" "<<temptriangle.getp1().gety()<<" "<<temptriangle.getp2().getx()<<" "<<temptriangle.getp2().gety()<<" "<<temptriangle.getp3().getx()<<" "<<temptriangle.getp3().gety()<<endl;
    
}

template<> void inputToFile<Circle>(Circle tempcircle, ofstream& file)
{
    string classname;
    classname=typeid(tempcircle).name();
    classname.erase(0,1);
    file<<classname<<" "<<tempcircle.getp().getx()<<" "<<tempcircle.getp().gety()<<" "<<tempcircle.getradius()<<endl;
    
}

template<class T>void outputFromFile(Shape* shape, ofstream& file)
{
    
}


