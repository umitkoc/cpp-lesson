#include <iostream>
void foo(const char *p = "error");
int main()
{
    foo();
    std::string str="merhaba5";
    
        std::cout<<str<<std::endl;
    
}
void foo(const char *p)
{
    std::cout << p << std::endl;
}