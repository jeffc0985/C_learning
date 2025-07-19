//由函數傳回指標
#include <stdio.h>

int *max(int*,int*);
int main()
{
    int a = 12, b = 17;
    int *p = max(&a,&b);

    printf("max=%d",*p);
    return 0;
}

int *max(int *p1,int *p2)
{   
    if(*p1>*p2)
        return p1;
    else
        return p2;

}