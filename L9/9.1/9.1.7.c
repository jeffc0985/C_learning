#include <stdio.h>

#define MAX 5
int main()
{
    int score[MAX];
    int i = 0, n, sum = 0;
    printf("請輸入學生成績(or -1 to exit):\n");
    do
    {
        if(i == MAX)    //陣列元素已滿
            {
                printf("陣列元素個數到達上限!\n");
                i++;
                break;
            }
        printf("請輸入學生成績:");
        scanf("%d",&score[i]);
        i++;
    } while (score[i-1]>-1);    //檢測輸入的那一個

    n = i-1;    //人數
    for(i=0;i<n;i++)          //下標最大值=資料數-1
        sum += score[i];
    
    printf("學生人數共%d人\n",n);
    printf("總分為:%d\n",sum);
    printf("平均為:%lf\n",(double)sum/n);
    
    return 0;
}