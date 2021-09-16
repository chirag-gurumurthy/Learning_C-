/* pointers.cpp by Chirag
updated 2021-09-15 */
#include <cstdio>

int main()
{
    int x = 7;
    int y = 42;
    int *ip;
    ip = &x;  // this gives the same result as declaring *ip=&x in the above line
    //*ip= x;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    x= 73;
    printf("The value of *ip is %d\n", *ip);

    ip = &y;
    printf("The value of *ip is %d\n", *ip);

    return 0;
}
