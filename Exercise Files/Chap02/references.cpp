/* references.cpp by Chirag
updated 2021-09-15 */
#include <cstdio>

int main()
{
    int x = 7;
    //int *ip = &x;
    int &y = x;     //here &y is referencing to the value stored in the variable x

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    //printf("The value of *ip is %d\n", *ip);

    y = 73;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    //printf("The value of *ip is %d\n", *ip);

    //int z = 7;
    //ip = &z;

    //printf("The value of x is %d\n", x);
    //printf("The value of y is %d\n", y);
    //printf("The value of *ip is %d\n", *ip);

    //*ip = 103;
    //y = 142;

    //printf("The value of x is %d\n", x);
    //printf("The value of y is %d\n", y);
    //printf("The value of *ip is %d\n", z);


    return 0;
}
