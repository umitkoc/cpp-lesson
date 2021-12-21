#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b);

int main()
{
    int a;
    int b;
    printf("please two number of inputs:\n");
    scanf("%d%d",&a,&b);
    printf("before [a]:%d [b]:%d\n",a,b);
    swap(&a,&b);
    printf("after [a]:%d [b]:%d\n",a,b);
    
    getche();
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;

    *b = temp;

}