//絕對值函數abs()
#include <stdio.h>

int abs(int);
int main()
{
    int n;
    printf("請輸入一個整數:");
    scanf("%d",&n);
    printf("abs(%d)=%d",n,abs(n));

    return 0;
}

int abs(int n)
{
    if(n>=0)
        return n;
    else
        return -n;
}