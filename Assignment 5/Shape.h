/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: nikol
 *
 * Created on November 17, 2019, 5:41 PM
 */

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

