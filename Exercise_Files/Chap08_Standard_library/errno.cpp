// errno.cpp by Chirag
// updated 2021-09-19
#include <cstdio>
#include <cerrno>
#include <cstring>

int main() {
    printf("Erasing file foo.bar\n");
    remove("foo.bar");
    printf("errno is: %d\n", errno);
    perror("Cannot erase file");

    const char * errstr = strerror(errno);
    printf("error (%d): %s\n", errno, errstr);

    return 0;
}
