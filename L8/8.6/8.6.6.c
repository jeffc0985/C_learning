//帶引數的巨集常見錯誤
#include <stdio.h>

#define SQUARE(x) x*x   //SQUARE(x) (x)*(x)
int main()
{
    int n;
    printf("輸入一個整數:");
    scanf("%d",&n);

    printf("%d*%d=%d",n+1,n+1,SQUARE(n+1)); //被替換成 n+1*n+1,中間的1*n導致錯誤
}
//記得將引數括弧避免錯誤