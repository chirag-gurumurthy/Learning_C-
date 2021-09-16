/* for.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    for(int i = 0; i < 5; ++i) {
        printf("element %d is %d\n", i, array[i]);
    }

    char s[] = "String";
    for(char *p = s; *p; ++p)
    {
        printf("char is %c\n", *p);
    }
    return 0;
}
