#include <stdio.h>

void rect(int,int,int*,int*);
int main()
{
    int a = 10, b = 20;
    int peri, area;

    rect(a,b,&peri,&area);

    printf("長方形周長=%d, 面積=%d",peri,area);

    return 0;
}

void rect(int a,int b,int *peri,int *area)
{
    *peri = 2*(a+b);
    *area = a*b;

}