//函數傳值機制
#include <stdio.h>

void func(int);

int main()
{
    int a = 10;
    printf("在main()裡,a=%d,a的地址為%p\n",a,&a);
    func(a);
    printf("呼叫func()後,a=%d,a的地址為%p\n",a,&a);
    
    return 0;
}

void func(int a)
{
    a += 13;
    printf("在func()裡,a=%d,a的地址為%p\n",a,&a);

}