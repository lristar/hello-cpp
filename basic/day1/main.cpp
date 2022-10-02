//
// Created by lzy on 2022/10/2.
//


#include <iostream>

int count;
extern void write_extern(void);

int main(){
    count = 5;
    write_extern();
    return 0;
}