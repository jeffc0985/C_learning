//結構
#include <stdio.h>

int main()
{
    struct data
    {
        char name[10];
        char sex;
        int score;
    } student;
     
    printf("請輸入姓名:");
    scanf("%s",&student.name);
    printf("請輸入性別:");
    scanf(" %c",&student.sex);
    printf("請輸入成績:");
    scanf("%d",&student.score);

    printf("學生:%s, 性別:%c, 成績:%d",student.name,student.sex,student.score);
    
    return 0;
}