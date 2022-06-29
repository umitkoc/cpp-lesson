// which examples is correct?
    //a) int *p=nullptr;
    //b) int &p=nullptr;
    //c) int &p=*nullptr;
    //d) int *&p=nullptr;
    //e) int &&p=nullptr;
    //f) int **p=nullptr;
    //g) int &&y=25;
    //h) int **y=25;


//pointer with referance semantics is the difference between?
/*
pointer
pointer to pointer :true
pointer=nulptr     :true



referance semantics
referance to referance: false
referance=nullptr     : false

*/


//why R value category is important?
/*
Because move semantics and perfect forwarding to use for important.

/*
what is const with constexpr different between?

*/



/*
    NULL --> cpp makro
    int *p=nullptr;   you should to write on the code


    what is the false for code ?
    + const
    + bool


    what is the nullptr for code?
    + of course nullptr_t 



*/



/*
    int *const ptr=5;----> (const to ptr)

    const int *ptr=5;----> (const  to int ptr)

    func(T *ptr)---> mutator or setter function

    foo(const T *ptr) ---> only read value: accessor or getter function
*/



/*
what is mutator and Accessor


link--> https://ccm.net/computing/programming/1873-accessors-and-mutators-in-c/#:~:text=A%20mutator%20is%20a%20member,type%20as%20the%20data%20member.

*/


/* example code
void foo(int (&ptr)[5])
{
    for (int i = 0; i < 5; i++){ptr[i] *= 2;}
}
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    foo(a);
    for (auto &&i : a){std::cout << i << std::endl;}
    return 0;}
*/



/*

what is struct with class different between?

+ Classes are of reference types.	
- Structs are of value types.
+ All the reference types are allocated on heap memory.	
- All the value types are allocated on stack memory.
+ Allocation of large reference type is cheaper than allocation of large value type.
- Allocation and de-allocation is cheaper in value type as compare to reference type.
+ Class has limitless features.	Struct has limited features.
- Class is generally used in large programs.
+ Struct are used in small programs.
- Classes can contain constructor or destructor.
+ Structure does not contain parameter less constructor or destructor, but can contain Parameterized constructor or static constructor.
- Classes used new keyword for creating instances.
+ Struct can create an instance, with or without new keyword.
- A Class can inherit from another class.
+ A Struct is not allowed to inherit from another struct or class.
- The data member of a class can be protected.
+ The data member of struct can’t be protected.
- Function member of the class can be virtual or abstract.
+ Function member of the struct cannot be virtual or abstract.
- Two variable of class can contain the reference of the same object and any operation on one variable can affect another variable.	
+ Each variable in struct contains its own copy of data(except in ref and out parameter variable) and any operation on one variable can not effect another variable.

*/

/*
 What is refererance type and value type?

 Value type is real value type.

 Referance type is another data type referance value.

*/


/*
what is new and delete operator?
link -->
https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

*/

/*
what is special function members?
- default constructor
- destructor
- copy constructor
- copy assignment
- move constructor
- move assignment



*/


/*
what is RAII mean?
(RESOURCE ACQUISTION IS INITILAZIONS )
SOURCE MANAGER --> FIRST DEFAULT TO GIVE VALUE  

*/




