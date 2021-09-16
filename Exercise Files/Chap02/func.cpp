/* func.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

int func(int i, const char *s)
{
    printf("this is func(%i, %s)\n", i, s);
    return i*2;
}

int main()
{
    puts("this is main()");
    int x = func(47, "string");
    printf("x is %d\n", x);
    return 0;
}

