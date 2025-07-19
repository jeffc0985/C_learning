//指標重新設值
#include <stdio.h>

int main()
{
    int a = 20, b = 10;

    int *p = &a;
    printf("&a=%p, &p=%p, p=%p, *p=%d\n",&a,&p,p,*p);
    
    p = &b;
    printf("&b=%p, &p=%p, p=%p, *p=%d\n",&b,&p,p,*p);

    return 0;
}