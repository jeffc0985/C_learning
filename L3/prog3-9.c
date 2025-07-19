#include <stdio.h>

int main()
{
    int n1, n2;                             //先宣告 n1, n2 的型態
    float a = 3.0002f;
    float b = 3.9998f;

    n1 = (int) a;                           //把 float 轉成 int
    n2 = (int) b;

    printf("a=%f,b=%f\n",a,b);
    printf("n1=%d,n2=%d\n",n1,n2);
    return 0;
}