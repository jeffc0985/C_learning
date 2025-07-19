//簡化運算式(順序)
#include <stdio.h>

int main()
{
    int a = 6, b = 3;
    printf("計算前:a=%d,b=%d\n",a,b);

    a /= --b; // a = a/(b-1)
    printf("計算後:a=%d,b=%d\n",a,b);

    return 0;
}