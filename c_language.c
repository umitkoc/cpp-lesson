#include <stdio.h>
#define SIZE 20

int main()
{


    return 0;
}

// int func(int const *ptr)
// {
//     int i = 0;
//     for (; ptr[i + 1] != 0;)
//     {
//         printf("%d  ", ptr[i]);
//         i++;
//     }
//     return 0;
// }
//     const int a[4] = {
//         1,
//         2,
//         3,
//         4};
//     func(a);
// int a = 5;
// int b = 25;
// int *const ptr1 = &a;
// *ptr1 = b;
// b = 45;
// //-----------------
// int const *ptr2 = &a;
// a = 40;
// ptr2=&b;
// printf("%d\n", *ptr2);

// int const * const ptr3=&a;
// //top level and low level variable
/* const semantics
example:
    const -->type<-- variable = value;

why we are use const?
    * codes help be myself
    * not change variable
    * best optimization
example c code:
    #define SIZE 50
    func(){

    const int x=50;
    int array[x];  ---> false   |vla error
    int array[SIZE];---> true   |(variable length array)
        }

    const int a=5;

    switch(x){
        case a:
            break;

    }
    not: error because C language const variable used but C++ the opposite used


    int const * ptr=&a <--same--> const int *ptr=&a;

    int const *ptr     <----difficult-----> int *const ptr

    int *const ptr=&a --> const pointer to int (top level const and itself const):
        this always variable to a referance. but change value

    const int *ptr=&a --> pointer to const int(low level const):
        this always not change variable to a referance and value
        read-only




*/

// #include "defaultlib.h"
/**
 * Returns the current time in microseconds.
 */

//     int x = 231;
//     while (x!=1)
//     {
//         if (x % 2 == 0)
//         {
//             x /= 2;
//         }
//         else
//         {
//             x = x * 3 + 1;
//         }
//         printf("%d\t", x);
//     }
//     printf("\n");

// int x,y,m;
// for(x=0;x<10;x++);
//     for(y=0;y<5;y++);
//         for (m=0;m<5;m++);
//             printf("%d\t%d\t%d\n",x,y,m);

// typedef struct
// {
//     const int* x;
// }Matrix;

// const int total(int x,int y){

//     return x;
// }
// Matrix m;

// int i=0;
// m.x=&i;
// printf("%d\n",*m.x);
// total(5,6);

// char name[SIZE] = "merhaba";
// int i = 0;
// while (i[name] != '\0')
// {
//     putchar(name[i]);
//     i++;
// }
// printf("\n---------\n");
// i = 0;
// do
// {
//     putchar(name[i]);
//     i++;
// } while (name[i] != '\0');

// printf("\n---------\n");
/*
    int a[5]={1,2,3,4,5,}    ---> ',' end character is trailing command
    what is VLA?
    int x=5;
    int a[x] ---> VLA ---> Veriable Lenght Array
    because x not const variable.


*/

/*
    what is dynamic memory managment ?
    - malloc, calloc, reloc

    designated initilazier:
        int array[100]={[0]=5,[21]=7,[3]=7};   ---> example code
        int array[]={[3]=4,[8]=100}; ---> index (max+1) result ---> 8+1=9 :) array[9]



*/
// int array[SIZE];
// int cnt[SIZE]={0};
// int array[SIZE]={1,2,19,6,8,1,10,12,15,18,12,10,4,9,13,7,4,16,11,19};
// for (int i = 0; i < SIZE; i++)
// {
//     ++cnt[array[i]];
// }
// for (int i = 0; i < SIZE; i++)
// {
//     printf("%d ",randomize(100));
// }