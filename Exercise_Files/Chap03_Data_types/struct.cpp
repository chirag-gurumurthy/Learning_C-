// struct.cpp by Chirag
// updated 2021-09-17
#include <cstdio>

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main() {
    Employee joe = { 42, "Joe", "Boss" };
    Employee *j = &joe;     // another way of accessing the structure elements is by using pointers

    /*printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);*/

     printf("%s is the %s and has id %d\n",
           j->name, j->role, j->id);

    return 0;
}
