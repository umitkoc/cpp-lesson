#include <iostream>



int main(){
    int x=10;
    int y=45;
    // int &z=x; 
    // z++;  x-->11 olur
    int *const ptr=&x;
    *ptr=11;
    std::cout<<x<<std::endl;



    return 0;
}