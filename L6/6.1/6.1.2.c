#include <stdio.h>

int main()
{
    int num;

    printf("請輸入一個整數:");
    scanf("%d",&num);

    if(num%2==0)
        printf("你輸入的數是偶數");
    else
        printf("你輸入的數是奇數");

    return 0;
}