// float-types.cpp by Chirag
// updated 2021-09-16
#include <cstdio>
// a byte is 8 bits
const size_t byte = 8;

int main() {
    float f;
    double df;
    long double ldf;

    printf("size of float f is %zd bits\n", sizeof(f) * byte);
    printf("size of double df is %zd bits\n", sizeof(df) * byte);
    printf("size of long double ldf is %zd bits\n", sizeof(ldf) * byte);

     f = 500.0;
     printf("f is %f\n", f);


     df = 0.1 + 0.1 + 0.1;
     printf("f is %1.20lf\n", df);

     if (df==0.3)
     {
         puts("true");
     }
     else
     {
         puts("false");
     }
     return 0;
}
