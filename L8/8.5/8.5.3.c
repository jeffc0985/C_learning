//同名區域變數會取代全域變數
#include <stdio.h>

void func();
int a = 50;              
int main()
{
    int a = 100;        //地頭蛇,在main函數里都聽他的
    printf("呼叫func()前,a=%d\n",a);
    func();
    printf("呼叫func()後,a=%d\n",a);    

    return 0;
}

void func()
{
    a += 300;           //沒有區域變數
    printf("於func()函數裡,a=%d\n",a);
}