#include <iostream>

class A
{
public:
    int one();

private:
    int two();

protected:
    int three();
};

class B : public A
{

    void foo()
    {
        one();   //public function
        three(); //protected function
    }
};

class C : private A // or class B:A same as same
{

    void foo()
    {

        one();
        three();
    }
};

//struct 
struct D: A{  // or struct D:public A same as same

    void foo(){

    }
};




//////////////



int main()
{

    C c;
    B b;
    D d;
    d.one();
    b.one(); // for have is be public function
    //  c.one();  //--> function "A::one" is inaccessible

    return 0;
}