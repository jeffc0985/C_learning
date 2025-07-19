//費式數列
#include <stdio.h>

int fib(int);
int main()
{
    int i, n;
    printf("輸入一個正整數:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("fib(%d)=%d\n",i,fib(i));
    printf("費氏數列第%d項為%d",n,fib(n));

    return 0; 
}

int fib(int n)
{
    if (n>2)
        return fib(n-1)+fib(n-2);
    if (n == 1 || n == 2)
        return 1;
}