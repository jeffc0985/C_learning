//全域變數及外部變數
#include <stdio.h>

void add1();

int count;
int main()
{
    printf("請輸入一個值:");
    scanf("%d",&count);

    add1();
    add1();

    count++;
    printf("count=%d\n",count);
    
    return 0;
}