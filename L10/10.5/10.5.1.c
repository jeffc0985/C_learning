//雙重指標
#include <stdio.h>

int main()
{
    int n = 20;
    int *p = &n, **pp = &p;

    printf("n=%d, &n=%p, *p=%d, p=%p, &p=%p\n",n,&n,*p,p,&p);
    printf("**pp=%d, *pp=%p, pp=%p, &pp=%p\n",**pp,*pp,pp,&pp);
    return 0;
}