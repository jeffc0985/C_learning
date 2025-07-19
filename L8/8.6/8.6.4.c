//用#define定義函數(巨集)
#include <stdio.h>

#define SQUARE n*n
int main()
{
    int n;
    
    printf("輸入一個整數:");
    scanf("%d",&n);
    printf("%d*%d=%d",n,n,SQUARE);

    return 0;
}