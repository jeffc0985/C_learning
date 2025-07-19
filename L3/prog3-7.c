/*比較float 和 double 的精度*/
#include <stdio.h>

int main()
{
    float a = 123.456789012345f;
    double b = 123.456789012345;

    printf("a=%16.12f\n",a);
    printf("b=%16.12f\n",b);
    return 0;
}
//a=123.456787109375-----只有7-8位精度
//b=123.456789012345-----有15-16位精度