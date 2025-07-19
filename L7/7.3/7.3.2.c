#include <stdio.h>

int main()
{
    int n, i = 1, fac = 1;

    do
    {
        printf("請輸入n值:");
        scanf("%d",&n);

    } while (n<0);

    if (n==0)
        printf("0!=1");
    
    else 
        {
            do
            {
                fac = fac*i;
                i++;

            } while (i<=n);

            printf("%d!=%d",n,fac); 
        }
        
    

    return 0;
}