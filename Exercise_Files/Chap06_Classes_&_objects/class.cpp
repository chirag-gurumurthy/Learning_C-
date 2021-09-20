// class.cpp by Chirag
// updated 2021-09-18
#include <cstdio>

// a very simple class
class C1 {
    int i = 0;      // this line in classes is called as 'data member'
public:
    void setvalue( int value )
    {
        i = value;
    }
    int getvalue()
    {
        return i;
    }
};

int main() {
    int i = 47;
    C1 o1;          // here 'o1' is the object or instance of class 'C1'

    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
