#include <conio.h>
#include <stdio.h>

int main()
{
    int x = 10;
    int *prt_x = &x;
    printf("adress:%p  ==> value:%d", prt_x, *prt_x);
    // *prt_x==>pointee
    // prt_x ==>pointer
    getchar();
}

/*

    pointer operators:
    & address operator
    * dereferencig or indirection
    []subscript or index operator
    -> member selection operator or arrow operator


*/