//goto敘述(loop的低配)
//計算1+2+...+10
#include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    start:
        i++;
        sum+=i;
        printf("%d",i);
    
        if (i<10);
        {
            printf("+");
            goto start;
        }

        printf("=%d",sum);

    return 0;
}