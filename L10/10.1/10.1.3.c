#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    *p1 = 7;
    *p2 = 32;
    a = 17;
    p1 = p2;
    *p1 = 9;
    p1 = &a;
    a = 64;
    *p2 = *p1+5;
    p2 = &a;

    printf("a=%d, b=%d, *p1=%d, *p2=%d, \n",a,b,*p1,*p2);//64,69,64,64
    printf("p1=%p, p2=%p\n",p1,p2);//皆為a的地址

    return 0;
}