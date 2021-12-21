#include <stdio.h>
#define SIZE 20

int main(int argc, char *argv)
{
    char str[SIZE];
    char str2[SIZE];

    printf("lütfen iki kelime giriniz\n");
    scanf("%s%s", str, str2);
    int i = 0;
    int flag=1;
    printf("%s %s \n", str, str2);
    while (str[i] == str2[i])
    {
        if (str[i] == '\0')
        {
            flag=0;
            break;
        }
        i++;
    }
    if (i)
    {
        printf("eşittir");
    }else{
        printf("eşit değildir");
    }
}