// 輸入字元
#include <stdio.h>

int main()
{
    char ch;

    printf("input a character:");
    scanf(" %c",&ch);          //當 %c 前有空格時, %c 會尋找第一個非空白字元
    printf("Your input is %c,and its ASCII code is %d\n",ch,ch);

    return 0;
}