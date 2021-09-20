/* cpp11.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

int main()
{
    int ia[] = { 1, 2, 3, 4, 5 };
    for( auto i : ia ) {
        printf("i is %d\n", i);
    }
    return 0;
}
