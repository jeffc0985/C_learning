#include <stdio.h>

#define SIZE 6
int main()
{
    int i, n, count = 0;
    int num[SIZE] = {49,88,57,10,66,88};
    printf("陣列num的元素有:");
    for(i=0;i<SIZE;i++)
        printf("%d ",num[i]);

    printf("\n");
    printf("請輸入欲搜尋的數字:");
    scanf("%d",&n);

    for(i=0;i<SIZE;i++)
        if(n == num[i])
            {
                printf("找到了!,num[%d]=%d\n",i,n);
                count += 1;
            }
    if(count == 0)
        printf("找不到欲搜尋的數字!");
    else
        printf("共有%d筆資料符合結果",count);

    return 0;
}