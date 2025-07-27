//二進制轉換
#include <stdio.h>

#define MAX 8

void show_bi(int);
int main()
{
    int n;
    printf("輸入一個數字(0~255):");
    scanf("%d",&n);

    show_bi(n);

    return 0;
}

void show_bi(int n)
{
    int num = n, i;
    int arr[MAX] = {0};

    for(i=1 ; i<=MAX ; i++)
    {
        arr[MAX-i] = num % 2;
        num = num / 2;        
    }

    printf("%d的二進位是:",n);
    for(i=0 ; i<MAX ; i++)
        printf("%d",arr[i]);
}