/* loop-cout.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

int main(int argc, char ** argv)
{
    puts("loop test");
    for (int i = 0; argv[i]; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
