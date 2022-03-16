#include <iostream>
#include <string>
using namespace std;
// 重温cpp

int add(int i,int j){
    return i +j;
}

int condition(int a,int b)  {
    return a >b ?a :b;
}

// 循环
void test_while(){
    // 永远循环
//    for ( ; ;) {
//        printf("this loop will run forever\n");
//    }
    int i=0;
    // while test
//    while(i<3){
//        i++;
//        printf("i is %d\n",i);
//    }
    // do while
//    do{
//        i++;
//        printf("i is %d\n",i);
//    }while(i<3);
     //
}

void judge(int i ){
    // if else if  ..... else
//    if (i < 8)
//    {
//        printf("haha i < 8");
//    }
//    else if (10 >i&& i >8)
//    {
//        printf("haha 10 >i&& i >8");
//    }
//    else{
//        printf("haha is else");
//    }
     // switch test
//     switch (i) {
//         case 10:
//             printf("i is 10");
//             break; //加了break 才不会往下跳
//         case 15:
//             printf("i is 15");
//             break;
//         default:
//             printf("i is other");
//             break;
//     }
}

// 函数返回多个值
// 两个值 std::pair<bool, int>
// 三个值及以上 std::tuple<bool, int,int>
// 函数参数设置默认值 int add(int a,int b=20)  =20设置默认值为20


// 多行注释
/*
 *
 */
// g++ main.cpp 编译cpp文件

int main() {
    string a = "hello world";
    // endl是换行的意思
    cout << a<< endl;
    cout << "hi" << "\n";
    cout << add(1,2) << "\n";
    cout << condition(3,2) << "\n";
    test_while();
    judge(10);
    return 0;
}