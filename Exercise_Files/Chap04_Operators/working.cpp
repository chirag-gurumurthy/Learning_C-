// working.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

int main()
{
    int y = 47;
    int x = 5;
    //int z = x + y;
    y += x;     // += or -= or *= or /= are called compound operators

    printf("x is %d\n", ++x);       // '++x' is pre-increment and 'x++' is post-increment
    printf("y is %d\n", y);
    //printf("z is %d\n", z);

    return 0;
}
