// dataMemebersUsingStruct.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

/*struct A
{
    int ia;
    int ib;
    int ic;
};*/

class A
{
public:
    int ia;
    int ib;
    int ic;
};

int main()
{
    A a = {1, 2, 3};
    printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);

    return 0;

}
