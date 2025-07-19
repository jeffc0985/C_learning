#include <stdio.h>

int main()
{
    int score;
    printf("請輸入你的成績:");
    scanf("%d",&score);

    

    if (score<60)
    
        if (score>=40)
                printf("需要補考!");
            else
                printf("不及格!");

    else
        printf("及格了!");

    return 0;
}