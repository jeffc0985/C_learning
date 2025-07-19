//陣列
#include <stdio.h>

int main()
{
    int score[4];       //宣告有四個元素的整數陣列

    score[0] = 90;      //元素的下標由0開始
    score[1] = 80;
    score[2] = 70;
    score[3] = 60;

    for(int i=0;i<=3;i++)
        printf("score[%d]=%d\n",i,score[i]);
    
    return 0;
}