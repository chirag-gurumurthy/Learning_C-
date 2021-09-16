// c-strings.cpp by Chirag
// updated 2021-09-16
#include <cstdio>

int main() {
    // char cstring[] = "String";
    const char *cstring = "String" " another string";   // string concatenation is performed by just like it is shown in this line

    puts(cstring);

    for(int i = 0; cstring[i]; i++) {
        printf("%d: %c\n", i, cstring[i]);
    }
    return 0;
}
