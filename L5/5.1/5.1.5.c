//遞增/遞減運算子(只能加1)
#include <stdio.h>

int main()
{
    int a = 6, b = 6;

    printf("a的初始值為:%d\n",a);
    printf("a++的傳回值為:%d\n",a++);   //先執行 再加
    printf("a的值為:%d\n",a);

    printf("b的初始值為:%d\n",b);
    printf("++b的傳回值為:%d\n",++b);   //先加 再執行
    printf("b的值為:%d\n",a);
    return 0;
}