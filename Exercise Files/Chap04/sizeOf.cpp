// sizeOf.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

int main()
{
    int x = 5;
    size_t y = sizeof(x);            //'size_t' is an typedef used particularly for 'sizeof' operator
    printf("sizeof x is %zd\n", y*8);



    return 0;
}
