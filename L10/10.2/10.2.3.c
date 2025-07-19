#include <stdio.h>

void change(int *, int *);
int main()
{
    int a = 20, b = 10;
    printf("呼叫change()前,a=%d, b=%d\n",a,b);
    change(&a,&b);
    printf("呼叫change()後,a=%d, b=%d\n",a,b);

    return 0;
}

void change(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}