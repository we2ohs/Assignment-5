//  Assignment 5
//  Student Name : Ahmed Ali
//  Student ID   : 40102454
//  Student Name : Nikolaos Chaskis
//  Student ID   : 40092571
//  Shape.h

#ifndef SHAPE_H
#define SHAPE_H

class Shape 
{
public:
    //Constructor
    Shape();
    
    //Destructor
    ~Shape();
    virtual void print()=0;
};
#endif /* SHAPE_H */

