// templateFactorialChallenge.cpp by Chirag
// updated 2021-09-19
#include <cstdio>
#include <iostream>

template <typename T>
T fact(T i)
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
    std::cout << fact<int>( 5 ) << std::endl;

    return 0;
}
