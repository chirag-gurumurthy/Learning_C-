// qualifiers.cpp by Chirag
// updated 2021-09-16
#include <cstdio>

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    //int x = 7;      // here 'x' is declare as an automatic variable
    static int x = 7;   // here 'x' is no longer automatic, it's now stored in static memory space. And each time you come into the function, it retains its value from the last time.
    return ++x;
}

int main() {
    //int i = 42;
    //const int i = 42;
    //i = 73
    //int i = func();

    //printf("The integer is %d\n", i);

    S s1;
    S s2;
    S s3;
    printf("The integer is %d\n", s1.static_value());
    printf("The integer is %d\n", s2.static_value());
    printf("The integer is %d\n", s3.static_value());

    return 0;
}

