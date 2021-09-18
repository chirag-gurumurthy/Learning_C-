// booleanOperators.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

int main()
{
    bool a = true;
    bool b = false;

    printf("a is %d\n", a);
    printf("b is %d\n", b);

    printf("size is %zd\n", sizeof(a)*8);

    //a = 7;        // any non zero value is considered as true or 1 in boolean opeartion
    //printf("a is %d\n", a);

    if(a && b)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }
    return 0;

}
