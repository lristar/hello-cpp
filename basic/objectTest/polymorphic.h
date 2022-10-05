#ifndef POLYMORPHIC_H
#define POLYMORPHIC_H

#include "iostream"
#pragma once

using namespace std;

class Shape
{
protected:
    /* data */
    int width;
    int height;
public:
    Shape(int wt,int hg);
    ~Shape();
    // 虚函数,防止用多态的时候被不同的于基类的调用
    virtual int area(){
        cout<< "Parent class area :"<<endl;
        return (this->width * this->height); 
    }
};

Shape::Shape(int wt,int hg)
{
    this->height = hg;
    this->width = wt;
}

Shape::~Shape(){

}


// 
class Rectangle: public Shape
{
private:
    /* data */
public:
    Rectangle(int a,int b):Shape(a,b){
    }
    ~Rectangle(){

    }
    int area(){
        cout << "Rectangle class area :" <<endl;
         return (this->width * this->height); 
    }
};

class Triangle : public Shape
{
public:
    Triangle(int a,int b):Shape(a,b){}
    ~Triangle(){

    }
    int area()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};




#endif