//函數間的相互呼叫
#include <stdio.h>

void sum(int), fac(int);

int main()
{
    sum(6);
    fac(6);

    return 0;
}

void sum(int n)
{
    int i, add = 0;
    for(i=1;i<=n;i++)
        add += i;
    printf("1~%d的和為:%d\n",n,add);

}

void fac(int n)
{
    int i, muti = 1;
    for (i=1;i<=n;i++)
        muti *= i;
    printf("%d階乘的值為:%d\n",n,muti);

}