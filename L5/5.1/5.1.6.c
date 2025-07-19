//邏輯運算子and/or
#include <stdio.h>

int main()
{
    int score;
    printf("請輸入成績:");
    scanf("%d",&score);

    if(score>100 || score<0)
        printf("輸入錯誤");
    if(score<=100 && score>=60)
        printf("及格了!\n");
    if(score<60 && score>=40)
        printf("需要補考!\n");
    if(score<40 && score>=0)
        printf("不及格!\n");

    return 0;
        
}