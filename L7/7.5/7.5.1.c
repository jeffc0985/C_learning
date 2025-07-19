//break
#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<=10;i++)
        {
            if (i%3==0)
                break;
            printf("i=%d\n",i);

        }
    printf("程式結束時,i=%d",i);

    return 0;
}