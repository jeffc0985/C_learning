// 遞迴函數(fac)
#include <stdio.h>

int fac(int);
int main()
{   
    int n;
    do
    {
        printf("請輸入正整數or 0:");
        scanf("%d",&n);
        if (n<0)
            printf("請輸入符合條件的數字!\n");
    } while (n<0);
    
    printf("fac(%d)=%d",n,fac(n));

    return 0;
}

int fac(int n)
{
    if(n>0)
        return  n*fac(n-1);
    else
        return 1;

}