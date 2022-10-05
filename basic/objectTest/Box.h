//
// Created by lzy on 2022/10/4.
//

#ifndef HELLO_CPP_BOX_H
#define HELLO_CPP_BOX_H
#include "iostream"

using namespace std;
//  静态成员函数和普通成员函数的区别

/*                      静态成员函数	普通成员函数
    所有对象共享	        Yes	        Yes
    隐含 this 指针	        No	        Yes
    访问普通成员变量（函数）   No	       Yes
    访问静态成员变量（函数）   Yes	        Yes
    通过类名直接调用	      Yes	       No
    通过对象名直接调用	      Yes	       Yes
*/
// 内联函数 为了加快调用效率,内部避免循环,switch,递归,超过10行的代码 ,过长的内联函数会被程序当作普通函数看待
inline int Max(int x,int y){
    return x>y?x:y;
}

class Box {
private:
    double length;
    double breadth;
    double height;
    static int counts;

public:
    // 静态变量
    // 静态函数
    static int getCount(){
        return counts;
    }
    static void setCount(void){
        counts = 0;
    }
    // 创建构造函数和析构函数
    Box(double len,double bre,double hei);
    Box(const Box &box);
    Box();
    ~Box();
    // 成员函数声明
    double get(void){
        return this->length * this->breadth * this->height;
    }
    void set(double len,double bre,double hei){
        this->length = len;
        this->breadth = bre;
        this->height = hei;
    }
    double sum(){
        return this->height * this->length * this->breadth;
    }
    // 友元函数
    // 要访问对象的成员需要对象参数
    // 如果访问的是静态static成员则不需要对象参数
    // 如果是全局变量则不需要对象做参数
    friend void printWidth(Box box);

    // 重载运算符
    Box operator+(const Box& b){
        Box box;
        box.length = b.length + this->length;
        box.breadth = b.breadth + this->length;
        box.height = b.height + this->height;
        return box;
    }

    Box operator-(const Box& b){
        Box box;
        box.length = this->length - b.length;
        box.breadth = this->breadth- b.breadth;
        box.height = this->height - b.height;
        return box;
    }
};

Box::Box(const Box &box){
    counts++;
    this->breadth = box.breadth;
    this->length = box.length;
    this->height = box.height;
}

Box::Box(double len,double bre,double hei){
    counts++;
    cout<<"调用有参构造函数"<<endl;
    this->length =len;
    this->breadth =bre;
    this->height = hei;
}

Box::Box(){
    counts++;
    cout<<"调用无参构造函数"<<endl;
}
//delete 先调用析构函数后释放内存
Box::~Box(){
    counts--;
    cout<<"调用析构函数"<<endl;
}
// 这里定义友元函数
void printWidth(Box box){
    cout<<"box.length\t"<<box.length<<endl;
    cout<<"box.breadth\t"<<box.breadth<<endl;
    cout<<"box.height\t"<<box.height<<endl;
}

// 您也可以在类的外部使用范围解析运算符 :: 定义该函数，如下所示：
// 实现可以放外边也可以放里面
// 成员函数实现
//double Box::get(void) {
//    return length * breadth * height;
//}
//
//void Box::set( double len, double bre, double hei)
//{
//    length = len;
//    breadth = bre;
//    height = hei;
//}
int Box::counts = 0;
#endif //HELLO_CPP_BOX_H
