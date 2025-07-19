// 讀取到錯誤的字元
#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("輸入一個整數:");
    scanf("%d",&num);
    printf("輸入一個字元:");
    // scanf("%c",&ch);會print出換行的ASCII(10),因為輸入enter代表[歸位+換行]
    //要在%前面加空白,以跳過不可列印字元(還是有ASCII碼)

    scanf(" %c",&ch);

    printf("num=%d ,ASCII of ch =%d\n",num,ch);

    return 0;
}