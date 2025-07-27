//左移、右移運算子
#include <stdio.h>

#define SIZE 8

void show_bi(int);
int main()
{
    int a = (89 << 1), b = (89 >> 1);

    show_bi(89);
    show_bi(a);
    show_bi(b);

    return 0;
}

void show_bi(int n)
{
    int arr[SIZE] = {0};

    int num = n, i;
    for(i=1 ; i<=8 ; i++)
    {
        arr[SIZE-i] = num % 2;
        num = num/2;
    }

    for(i=0 ; i<SIZE ; i++)
        printf("%d",arr[i]);
    printf("\n");
}