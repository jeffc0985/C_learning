/*清除由enter造成的多餘\n*/
#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("輸入一個整數:");
    scanf("%d",&num);
    getchar();              //從緩衝區拿走一個字元

    printf("輸入一個字元:");
    scanf("%c",&ch);

    printf("num=%d,the ASCII of char is %d\n",num,ch);
    
    return 0;
}