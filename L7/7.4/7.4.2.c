//99乘法表(while loop)
#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    while(i<=9)
        {
            while(j<=9)
                {
                    printf("%d*%d=%2d  ",i,j,i*j);
                    j++;
                }
            printf("\n");
            i++;
            j = 1;
        }

    return 0;
}
