// printf.cpp by Chirag
// updated 2021-09-19
#include <cstdio>

int main()
{
    int i = 5;
    long int li = 1234567890L;
    const char * s = "This is a string.";
    printf("i is %d, li is %ld, s is %s\n", i, li, s);
    printf("pointer is %p, sizeof is %zd\n", s, sizeof(s));

    return 0;
}
