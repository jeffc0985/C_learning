//傳址呼叫的特點
#include <stdio.h>

#define SIZE 4
void show(int arr[]);
void add2(int arr[]);
int main()
{
    int A[SIZE] = {10,20,30,40};
    printf(" 陣列A各元素的值為:\n");
    show(A);
    add2(A);
    printf("呼叫add2()後,陣列A各元素的值為:\n");
    show(A);

    return 0;
}

void show(int arr[])
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%d ",arr[i]);
        printf("\n");
}

void add2(int arr[])
{
    int i;
    for(i=0;i<SIZE;i++)
        arr[i] += 2;

}