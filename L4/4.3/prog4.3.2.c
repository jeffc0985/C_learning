//讀取輸入緩衝區的資料
#include <stdio.h>

int main()
{
    int num;
    char str[10];

    printf("輸入一個整數:");
    scanf("%d",&num);
    printf("num=%d\n",num);

    printf("輸入一個字串:");
    scanf("%s",str);
    printf("str=%s",str);

    return 0;
}