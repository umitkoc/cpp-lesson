#include <iostream>

struct Test
{
};
void operator!(Test)
{
    std::cout<<"hello world !\n";
}
struct Demo
{
   void operator!(){
       std::cout<<"helloo world\n";
   }
};


int main()
{
    Test test;
    Demo demo;
    !demo;
    !test;

    return 0;
}