// factorialChallenge.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

int fact(int i)
{
    int f = 1;
    if( i < 2 )
    {
        return 1;
    }
    else
    {
        for(int n=2; n<=i; ++n)
        {
            f *= n;
        }
        return f;
    }
}

int main()
{
    int a = 5;
    printf("factorial of a %d is %d\n", a, fact(a));

    return 0;
}
