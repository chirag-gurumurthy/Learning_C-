/* 02_challenge.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{
    int count=0;

    for( int x : string )
    {
        if(x == 0)
        {
            break;
        }
        ++count;
    }
    printf("The number of characters is: %d\n", count);

    return 0;
}
