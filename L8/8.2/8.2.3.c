//次方函數pow()
#include <stdio.h>

double power(double,int);
int main()
{
    double x;
    int n;
    printf("請輸入底數:");
    scanf("%lf",&x);
    printf("請輸入指數:");
    scanf("%d",&n);

    printf("%lf的%d次方為:%lf",x,n,power(x,n));
    return 0;
}

double power(double x,int n)
{
    int i;
    double value = 1;

    for(i=1;i<=n;i++)
       value *= x;

    return value;
}