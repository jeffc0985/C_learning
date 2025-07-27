//位元運算子
#include <stdio.h>

int main()
{
    int a = 105, b = 26;
    printf("%d\n",~a);
    printf("%d\n",~b);

    printf("a & b = %d\n",a & b);
    printf("a | b = %d\n",a | b);
    printf("a ^ b = %d\n",a ^ b);
}