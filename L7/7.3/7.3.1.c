//do while loop
#include <stdio.h>

int main()
{
    int n, i = 0, sum = 0;
    do
    {
        printf("請輸入n值(n>1):");
        scanf("%d",&n);

    } while (n<=1);

    do
    {
        sum+=i++;

    } while (i<=n);

    printf("從1累加到%d的值為:%d",n,sum);  
    


    return 0;
}