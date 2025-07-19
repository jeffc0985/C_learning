//nested loop:將整數反過來列印
#include <stdio.h>

int main()
{
    int a, r;
    while (1)
    {
        do
        {
            printf("請輸入一個整數:");
            scanf("%d",&a);

        } while (a<=0);

        printf("the reverse is: ");

        while (a!=0)
        {
            r = a%10;
            a /= 10;
            printf("%d",r);

        }

        printf("\n\n");

    }
    return 0;
}