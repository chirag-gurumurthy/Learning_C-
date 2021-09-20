// fileManagement.cpp by Chirag
// updated 2021-09-19
#include <cstdio>

int main()
{
    static const char *fn1 = "file1";
    static const char *fn2 = "file2";
    /*FILE *fh = fopen(fn1, "w");   // this line of command will open a file and execute the second argument. Here it is "w".
    fclose(fh);*/
    //rename(fn1, fn2);
    remove(fn2);

    puts("Done.");


    return 0;
}
