/* hello.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int i = 0;

    while(i < 5) {
            if(i==2)
            {
                ++i;
                continue;
            }
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }


    do
    {
            printf("element %d is %d\n", array[i]);
            ++i;
    } while(i < 5);

    return 0;
}
