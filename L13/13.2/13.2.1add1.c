#include <stdio.h>

extern int count;
void add1()
{
    count += 1;
    printf("count=%d\n",count);
}