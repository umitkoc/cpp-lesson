#include <stdio.h>
#define SIZE 100
int main(){


    char str[SIZE]="hello world";
    char str2[SIZE];
    int i=SIZE-1;
    int k=0;
    for (i; str[i] == '\0'; i--)
        ;
    for (i; str[i] != '\0'; i--)
    {
        str2[k] = str[i];
        k++;
    }
    printf("[%s]",str2);
    



    return 0;
}