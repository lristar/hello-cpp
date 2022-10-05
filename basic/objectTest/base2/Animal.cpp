//
// Created by lzy on 2022/10/4.
//

#include "Animal.h"


void testAnimal();
void testPrintf();

int main(){
    Dog dog;
    dog.GetAll();
    cout<<"---------------------testAnimal()----------------------------"<<endl;
    testAnimal();
    testPrintf();
}

void testAnimal(){
    Rectangle rs;
    int area;
    rs.setWidth(10);
    rs.setHeight(10);
    area = rs.getArea();
    // 输出对象的面积
    cout << "Total area: " << rs.getArea() << endl;

    // 输出总花费
    cout << "Total paint cost: $" << rs.getCost(area) << endl;
}

// 重载或通过泛型实现
void testPrintf(){
    printData<string> p;
    p.print("hahahahaha");
}


// 运算符重载的学习
