/* class.cpp by Chirag
updated 2021-09-16 */
#include <cstdio>

class C {
    int i = 0;
public:
    void setvalue( int value ) { i = value; }
    int getvalue() { return i; }
};

int main() {
    int i = 47;
    C o1;       // here 'o1', 'o2', 'o3' are an object or instance of data type class 'C' which was declared before the main function
    C o2;
    C o3;

    o1.setvalue(i);
    o2.setvalue(i*2);
    o3.setvalue(i*3);

    printf("value is %d\n", o1.getvalue());
    printf("value is %d\n", o2.getvalue());
    printf("value is %d\n", o3.getvalue());
    return 0;
}
