//while loop
#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    while (sum<=100)
    {
        sum+=i;
        printf("從1累加到%2d=%2d\n",i,sum);
        i++;
    }
    printf("共要加到%d",i-1);
    
    return 0;
}