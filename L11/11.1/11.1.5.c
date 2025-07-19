//nested struct
#include <stdio.h>

int main()
{
    struct date
    {
        int month;
        int day;
    }birthday;

    struct data
    {
        char name[10];
        int score;
        struct date birthday;
    }stu1 = {"Jeff",100,{12,15}};

    printf("姓名:%s\n",stu1.name);
    printf("生日:%d月%d日\n",stu1.birthday.month,stu1.birthday.day);
    printf("成績:%d\n",stu1.score);    
    
    return 0;
}