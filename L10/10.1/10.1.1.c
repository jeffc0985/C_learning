//指標
#include <stdio.h>

int main()
{
    int a = 20;
    int *p = &a;
    
    printf("a=%d,&a=%p\n",a,&a);
    printf("*p=%d,p=%p,&p=%p\n ",*p,p,&p);
    
    return 0;
}