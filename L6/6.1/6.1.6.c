#include <stdio.h>

int main()
{
    int num;
    printf("輸入一個整數:");
    scanf("%d",&num);

    if (num>=0)
    {
        if (num<=10)
            printf("數字介於0~10之間");
    }

    else//和9行配對
        printf("數字小於0");

    return 0;
}