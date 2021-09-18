// typeid.cpp by Chirag
// updated 2021-09-18
#include <cstdio>
#include <typeinfo>

struct A { int x; };
struct B { int x; };

A a1;
A a2;
B b1;
B b2;

int main() {
    if(typeid(a1) == typeid(B)) {
        puts("same");
    } else {
        puts("different");
    }

    printf("type is %s\n", typeid(A).name());
    printf("type is %s\n", typeid(B).name());

    return 0;
}
