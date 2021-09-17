// working.cpp by Chirag
// updated 2021-09-16
#include <cstdio>

int &f(int &i)
{
    return ++i;
}
int main()
{
    // puts("Hello, World! \' \" \\ \x40");

    int i = 5;
    {// int &ir = i;
    // ir = 10;

    //printf("i is %d\n", i);
    }
    // printf("f(i) is %d", f(i)); // this line will return 6 as the answer

    f(i);
    printf("i is %d", i);

    return 0;
}
