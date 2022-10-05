#include "polymorphic.h"


#include "iostream"

int main(){
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();
    return 0;
}