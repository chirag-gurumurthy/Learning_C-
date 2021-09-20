// funcPointers.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

void func()
{
    puts("this is func()");
}

int main()
{
    puts("this is main()");
    void (*pfunc)() = func;
    (*pfunc)();

    return 0;
}


