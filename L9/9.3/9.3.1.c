//傳遞陣列給函數
#include <stdio.h>

#define SIZE 4
void show(int arr[]);
int main()
{
    int i;
    int A[SIZE] = {5,3,6,1};
    printf("陣列的內容為:");
    show(A);
}

void show(int arr[])
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%d ",arr[i]);

}