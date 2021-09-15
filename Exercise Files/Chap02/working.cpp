/* hello.cpp by Chirag
updated 2021-09-15 */
#include <cstdio>

int main()
{
    int i;
    i = 7;
    printf("value is %d\n", i);

    char s[] = "String";
    printf("s is %s\n", s);

    for(int i=0; s[i] != 0; ++i)
    {
        printf("char is %c\n", s[i]);
    }

    // another way of printing the character array is using pointers as shown below

    for(char *cp = s; *cp!=0; ++cp)
    {
        printf("char is %c\n", *cp);
    }

    return 0;
}
