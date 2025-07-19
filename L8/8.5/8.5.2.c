//全域變數
#include <stdio.h>

void func();
int a;              //全域變數,每個函數都能改他
int main()
{
    a = 100;
    printf("呼叫func()前,a=%d\n",a);
    func();
    printf("呼叫func()後,a=%d\n",a);    

    return 0;
}

void func()
{
    a = 300;
    printf("於func()函數裡,a=%d\n",a);
}