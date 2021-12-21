#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{

    printf("HELLO BANK\n");
    int money;
    int state;
    int i = 0;
    for (;;)
    {
        printf("1.add money\n2.take money\n3.about money\n4.exit\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:

            scanf("%d", &state);
            money += state;
            break;
        case 2:
            scanf("%d", &state);
            money -= state;
            break;
        case 3:
            printf("money:%d\n", money);
            break;
        case 4:
            printf("good bye");
            exit(0);
        default:
            break;
        }
    }
}