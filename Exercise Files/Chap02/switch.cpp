/* switch.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

int main() {
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;

    int x = 5;

    switch(x) {
        case iONE:
            puts("one");
            break;
        case iTWO:
            puts("two");
            break;
        case iTHREE:
            puts("three");
            break;
        case iFOUR:
            puts("four");
            break;
        default:
            puts("greater than 4");
            break;
    }
}
