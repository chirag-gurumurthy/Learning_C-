// memberFunc.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

// a very simple class
class C1 {
    int i = 0;      // this line in classes is called as 'data member'
public:
    void setvalue( int value );

    int getvalue();

    int getvalue() const;

};

void C1::setvalue(int value)
{
    i = value;
}

int C1::getvalue()
{
    puts("non-const function");
    return i;
}

int C1::getvalue() const
{
    puts("const function");
    return i;
}

int main() {
    int i = 47;
    C1 o1;          // here 'o1' is the object or instance of class 'C1'
    o1.setvalue(i);

    const C1 o2 = o1;

    printf("value is %d\n", o1.getvalue());
    printf("value is %d\n", o2.getvalue());

    return 0;
}
