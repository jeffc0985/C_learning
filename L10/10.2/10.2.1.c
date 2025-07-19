//傳遞指標到函數
#include <stdio.h>

void address(int *);
int main()
{
    int a = 12;
    int *p = &a;

    address(&a);
    address(p);
    return 0;
}

void address(int *ptr)
{
    printf("在位址%p內,存放的變數內容為:%d\n",ptr,*ptr);

}