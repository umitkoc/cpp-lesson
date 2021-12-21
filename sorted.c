#include <stdio.h>
#include <conio.h>



int main(){

    int a[11]={8,5,9,6,99,85,45,46,2,105};
    int temp=0;
    for(int i=0;a[i]!='\0';i++){
        for(int j=i+1;a[j]!='\0';j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;a[i]!='\0';i++){
        printf("%d - ",a[i]);
    }






    getchar();
    return 0;
}