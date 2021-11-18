#include <iostream>

int sum(int &a,int &b){

    a=5;
    b=6;
    return a+b;
}

int main(){
    int a=1;
    std::cout<<sum(a,a)<<"\n";
}
