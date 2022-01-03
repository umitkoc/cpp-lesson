#include <iostream>
#include <conio.h>
enum Color:unsigned int
{
    Red,
    White,
    Black,
    Blue
};

int main()
{
    enum Color color;
    color=Color::Blue;
    std::cout << color << std::endl;


    getchar();
    return 0;
}