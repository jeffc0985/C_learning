#include <stdio.h>

void add10(int *);
int main()
{
    int a = 5;
    printf("呼叫add10()前,a=%d\n",a);

    add10(&a);

    printf("呼叫add10()後,a=%d\n",a);

    return 0;
}

void add10(int *ptr)
{
    *ptr += 10;

}