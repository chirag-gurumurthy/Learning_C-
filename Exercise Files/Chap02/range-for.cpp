/* range-for.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    for(int i : array) {
        printf("i is %d\n", i);
    }

    char s[] = "String";

    for(char c : s)
    {
        if (c==0)
        {
            break;
        }

        printf("c is %c\n", c);
    }
    return 0;
}
