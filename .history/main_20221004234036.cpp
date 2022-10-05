#include <iostream>
#include <string>
#include <cstring>
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

int test_str(){
    char str1[10] = "start";
    char str2[20] = "study";
    char str3[10] = "c++";
    char str4[10];
    printf("str1 %s\n",str1);
    strcpy(str4,str1);  // 把str1复制到str4上
    printf("str4 %s\n",str4);
    strcat(str2,str1);  // 把str1拼接到str2后面
    printf("str2 %s\n",str2);

    string s1 = "start";
    string s2 = "study";
    string s3 = "c++";
    string s4 ;
    s4 = s1;
    cout << "s4 is "<<s4 <<endl;
    cout << "strcat is " << s1+s2+s3 << endl;
    return 1;
}

// 多行注释
/*
 *
 */
// g++ main.cpp 编译cpp文件



#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
    cout << "hello world" << endl;
    system("pause");
    return 0;
