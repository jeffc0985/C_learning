//帶引數的巨集
#include <stdio.h>

#define SQUARE(x) x*x
int main()
{
    int n;
    printf("輸入一個整數:");
    scanf("%d",&n);

    printf("%d*%d=%d",n,n,SQUARE(n));
}