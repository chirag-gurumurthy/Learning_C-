// automaticAndStaticVariable.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

void func()
{
    //int i = 5;              // the variable 'i' in this line is stored as a automatic variable. i.e., the variable is stored in a stack memory
    static int i = 5;       // the variable 'i' in this line is stored as a static variable. i.e., the variable is stored in the main memory
    printf("i is %d\n", i++);
}

int main()
{
    puts("this is main()");
    func();
    func();
    func();

    return 0;
}
