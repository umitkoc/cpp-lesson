#include <iostream>
#include <math.h>





int fmax(int x,int y){
    return 1;
}
namespace berk {
    int fmax(int x,int y){
    return 0;
}
}
int main(){

    bool dogru;
    std::cout<<fmax(25,74)<<"\n";




    return 0;
}