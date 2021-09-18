// passingArgumentstofunc.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

void func(const int *i)
{
    //*i = 73;
    printf("the value of i is %d\n", *i);
}


int main()
{
    int a = 47;
    puts("this is main()");
    func(&a);
    printf("the value after func() is %i\n", a);
    return 0;
}


