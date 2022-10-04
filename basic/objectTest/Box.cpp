//
// Created by lzy on 2022/10/4.
//

#include "Box.h"
#include "iostream"

using namespace std;

int main(){
    Box box1 = Box{5.0,6.0,7.0};
    Box box2 = Box{5.0,6.0,7.0};
    Box box3;
    double volume = 0.0;

    // box 1 的体积
    volume = box1.height * box1.length * box1.breadth;
    cout << "Box1 的体积：" << volume <<endl;

    // box 2 的体积
    volume = box2.height * box2.length * box2.breadth;
    cout << "Box2 的体积：" << volume <<endl;
    box3.set(1.0,2.0,3.0);
    volume = box3.height * box3.length * box3.breadth;
    cout << "Box3 的体积：" << volume <<endl;
}