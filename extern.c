#include <stdio.h>


   int count;
int variable(void);



int main(){

    count=5;
    printf("%d",variable());

return 0;
}



int variable(void){


    return count;
}