// auto-type2.cpp by Chirag
// updated 2021-09-17
#include <cstdio>
#include <vector>

int main() {
    std::vector<int> vi = { 1, 2, 3, 4, 5 };
    // for(std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
    for(auto it = vi.begin(); it != vi.end(); ++it)
    {
        printf("int is %d\n", *it);
    }
    return 0;
}
