//氣泡排序法
#include <stdio.h>

#define SIZE 5
void show(int a[]);
void bubble(int b[]);
int main()
{
    int i;
    int A[SIZE];

    for(i=0;i<SIZE;i++)
        {
            printf("請輸入第%d個數:",i+1);
            scanf("%d",&A[i]);
        }

    printf("排序前,陣列A的元素為:");
    show(A);
    bubble(A);
    printf("排序後,陣列A的元素為:");
    show(A);

    return 0;
}

void show(int a[])
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%02d ",a[i]);
    printf("\n");
}

void bubble(int a[])
{
    int i, j, temp;
    int complete = 0;   //表示還沒排序完
          
    for(i=1;i<SIZE && complete==0;i++)
    {
        complete = 1;   //開始排序設為成功,若都沒有進行排序,則為提早排序成功
        for(j=0;j<SIZE-i;j++)
            if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    complete = 0;      //如果有進行一次排序,則視為還沒排好
                }                
    }
}