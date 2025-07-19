//遞回函數(power)
#include <stdio.h>

int power(int,int);
int main()
{
    int x, n;
    printf("請輸入底數及指數:");
    scanf("%d %d",&x,&n);

    printf("%d的%d次方為:%d",x,n,power(x,n));

    return 0;
}

int power(int x,int n)
{
    if(n>0)
        return x*power(x,n-1);
    else
        return 1;

}