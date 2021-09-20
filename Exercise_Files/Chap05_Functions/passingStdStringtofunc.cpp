// passingStdStringtofunc.cpp by Chirag
// updated 2021-09-18
#include<cstdio>
#include<string>

void func(const std::string &s)
{
    printf("the value of is %s\n", s.c_str());
}


int main()
{
    std::string s = "This is a string";         // here 's' is an pbject
    puts("this is main()");
    func(s);

    return 0;
}
