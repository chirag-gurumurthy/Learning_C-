// typeCast.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

int main()
{
    int x = 5;
    long long int y;
    y = x;
    x = (int)y;     // this is a cast operator, i.e., conversion from 'long long int' to 'int'
    printf("x is %d\n", x);
    printf("y is %lld\n", y);


    return 0;
}
