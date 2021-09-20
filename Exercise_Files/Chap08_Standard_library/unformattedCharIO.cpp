// unformattedCharIO.cpp by Chirag
// updated 2021-09-19
#include <cstdio>

int main()
{

    const int bufsize = 256;
    static char buf[bufsize];
    fputs("prompt: ", stdout);      //here 'stdout' is a file handler.
    fgets(buf, bufsize, stdin);
    puts("output: ");
    fputs(buf, stdout);
    fflush(stdout);

    return 0;
}
