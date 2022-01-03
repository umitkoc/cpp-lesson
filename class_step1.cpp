#include <conio.h>
#include <iostream>
class Program
{
public:
    Program(int, int);
    int sum();
    void print() const;
    ~Program();

private:
    int p_x;
    int p_y;
};
Program::Program(int x, int y) : p_x{x}, p_y{y}
{
}
void Program::print() const
{
    std::cout << p_x << "+" << p_y << "=" << p_x + p_y << "\n";
}
Program::~Program()
{
    std::cout << "game over"
              << "\n";
}

class ProgramTwo
{
private:
    int x;
    int y;

public:
    ProgramTwo(int, int);
    ~ProgramTwo();
    void print() const;
};

ProgramTwo::ProgramTwo(int _x=0, int _y=0) : x{_x}, y{_y}
{
    std::cout << "start constructor\n";
}

void ProgramTwo::print() const
{
    std::cout << x << "+" << y << "=" << x + y << "\n";
}

ProgramTwo::~ProgramTwo()
{
    std::cout << "end constructor\n";
}

int main()
{
    // Program program(5, 6);
    // program.print();
    ProgramTwo program(8, 6);
    program.print();
    /* 
     ProgramTwo program;
     program.print();
     default variable
     */
    getchar();
}