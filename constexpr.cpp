#include <iostream>
#include <conio.h>

/**
 * constexpr çalışma (runtime) zamanında çalışır. :)
 * bunun bir örneği olarak quokka.js de görmüştüm
**/
constexpr int isprime(int x){

    if(x%2==0){
        return 123;
    }
    return 0;

}

int main(){

   const  int x=2;
    std::cout<<isprime(x)<<std::endl;



    getchar();
    return 0;
}
