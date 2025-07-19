#include <stdio.h>

#define MAX 10
int main()
{
    int i = 0, j, sum = 0;
    int score[MAX];
    printf("請輸入學生成績(or -1 to exit):\n");

    do
    {
        printf("請輸入學生成績:");
        scanf("%d",&score[i]);
        i++;
        
    } while (score[i-1]>-1);

    for(j=0;j<i-1;j++)
        sum += score[j];

    printf("總成績為:%d;平均為:%lf",sum,(double)sum/(i-1)); 


    return 0;
}