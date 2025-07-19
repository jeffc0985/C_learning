#include <stdio.h>

int add(int,int);
int main()
{
    int sum, a = 5, b = 3;
    sum = add(a,b);
    printf("%d+%d=%d",a,b,sum);
    return 0;
}

int add(int num1,int num2)
{
    int sum;
    sum = num1+num2;
    return sum;
}