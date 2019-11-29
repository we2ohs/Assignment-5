//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  main.cpp



/*
    Notes:
    1 - The objects created in part (i) in main are only an example, they can be changed for testing purposes
    2 - We created specialized templates in order to input to files based on the type of shape
    3 - We created a file with exception handling to input the objects into the files
    4 - We created an abstract class pointer, intitialized to null
    5 - We are reading from the file using exception handling to assign the values in the file to the abstract class pointer,
        depending on the shape classtype
    6 - The output of the file is printed to the console using virtual print() function (polymorphism)
 
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


const size_t MAX_SHAPES=100;

template <class T> void inputToFile(T, ofstream&);
template <> void inputToFile<Point>(Point, ofstream&);
template <> void inputToFile<Line>(Line, ofstream&);
template <> void inputToFile<Triangle>(Triangle, ofstream&);
template <> void inputToFile<Circle>(Circle , ofstream&);


int main(int argc, char *argv[])
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
    
    //Sequential Access File objects
    ofstream writeToFile;
    ifstream readFromFile;
    
    try //Exception handling in case file does not write
    {
       writeToFile.open("objects.txt");
        
        if(!writeToFile.is_open())
        {
            throw "EXCEPTION 1 - Error Writing to File!"; //Throw Statement
        }
        
        //Using The template function to write the objects to the file
        inputToFile(p1, writeToFile);
        inputToFile(p2, writeToFile);
        inputToFile(line, writeToFile);
        inputToFile(p3, writeToFile);
        inputToFile(triangle, writeToFile);
        inputToFile(p, writeToFile);
        inputToFile(circle, writeToFile);
        
        writeToFile.close();
    }
    catch(char const* e) //Catching the throw statement
    {
        cout<<e<<endl;
        writeToFile.clear();
        exit(1);
    }
    
    
    //======================== Part iii ========================
    Shape* shape[MAX_SHAPES]; //Abstract Base Class Declaration and Intialization
    
    for(int i = 0; i<MAX_SHAPES; i++)
    {
        shape[i]=nullptr;
    }
    
    //======================== Part iv & v ========================
    try //Exception handling in case file does not write
    {
        //readFromFile.open("objects.txt");
        
        if(!readFromFile.is_open())
        {
            throw "EXCEPTION 2 - Error Reading From File!"; //Throw Statement
        }
        
        string temp[100]; //Stores the values of the file
        double tempNumber[100]; //Store the numbers as per class type
        
        //Reading from file, matching Field 1 to type of class
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
                            
                            if(temp[i]=="Point") //if first field is Point Class Type
                            {
                                //Converting string to double from temp array
                                tempNumber[0]=atof(temp[i+1].c_str());
                                tempNumber[1]=atof(temp[i+2].c_str());
                                
                                //Creating a shape object of type point
                                shape[j]= new Point(tempNumber[0],tempNumber[1]);
                                
                                //Display Content of Shape Array
                                cout<<"------ Point ------"<<endl;
                                shape[j]->print();
                                cout<<endl;
                                
                            }
                            else if(temp[i]=="Line")//if first field is Line Class Type
                            {
                                //Converting string to double from temp array
                                tempNumber[0]=atof(temp[i+1].c_str());
                                tempNumber[1]=atof(temp[i+2].c_str());
                                tempNumber[2]=atof(temp[i+3].c_str());
                                tempNumber[3]=atof(temp[i+4].c_str());
                                
                                //Creating a shape object of type point
                                shape[j] = new Line(Point(tempNumber[0],tempNumber[1]),Point(tempNumber[2],tempNumber[3]));
                                
                                //Display Content of Shape Array
                                cout<<"------ Line ------"<<endl;
                                shape[j]->print();
                                cout<<endl;
                                
                            }
                            else if(temp[i]=="Triangle")//if first field is Triangle Class Type
                            {
                                //Converting string to double from temp array
                                tempNumber[0]=atof(temp[i+1].c_str());
                                tempNumber[1]=atof(temp[i+2].c_str());
                                tempNumber[2]=atof(temp[i+3].c_str());
                                tempNumber[3]=atof(temp[i+4].c_str());
                                tempNumber[4]=atof(temp[i+5].c_str());
                                tempNumber[5]=atof(temp[i+6].c_str());
                                
                                //Creating a shape object of type point
                                shape[j] = new Triangle(Point(tempNumber[0],tempNumber[1]),Point(tempNumber[2],tempNumber[3]),Point(tempNumber[4],tempNumber[5]));
                                
                                //Display Content of Shape Array
                                cout<<"------ Triangle ------"<<endl;
                                shape[j]->print();
                                cout<<endl;
                                
                            }
                            else if(temp[i]=="Circle") //if first field is Circle Class Type
                            {
                                //Converting string to double from temp array
                                tempNumber[0]=atof(temp[i+1].c_str());
                                tempNumber[1]=atof(temp[i+2].c_str());
                                tempNumber[2]=atof(temp[i+3].c_str());
                                
                                //Creating a shape object of type point
                                shape[j] = new Circle(Point(tempNumber[0],tempNumber[1]),tempNumber[2]);
                                
                                //Display Content of Shape Array
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
    }
    catch(char const* e)
    {
        cout<<e<<endl;
        writeToFile.clear();
        exit(1);
    }

    
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






