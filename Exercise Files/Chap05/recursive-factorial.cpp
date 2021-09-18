// recursive-factorial.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

unsigned long int factorial( unsigned long int n ) {
    if( n < 2 )
    {
        return 1;
    }
    else
    {
        return n * factorial( n - 1 );
    }
}

int main() {
    unsigned long int n = 5;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}
