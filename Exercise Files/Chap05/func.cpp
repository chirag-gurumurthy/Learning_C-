// func.cpp by Chirag
// updated 2021-09-18
#include <cstdio>
#include "func.h"       //by declaring function name in the header, we can avoid writing the function 'func()' before the main() function



int main()
{
    puts("this is main()");
    func();
    return 0;
}


void func()
{
    puts("this is func()");
}
