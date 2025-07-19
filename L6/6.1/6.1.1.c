#include <stdio.h>

int main()
{   
    int num;

    printf("請輸入一個數字:");
    scanf("%d",&num);

    if(num>0)
        printf("你輸入的數字大於0");
    else
        printf("你輸入的數字小於等於0");

    return 0;
}