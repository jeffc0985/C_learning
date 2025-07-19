//簡化結構型態
#include <stdio.h>

typedef struct 
{
    char name[10];
    int math;
    int eng;
    int chinese;   
}GRADE;

void display(GRADE);
int main()
{
    GRADE stu1 = {"Jeff",100,90,90};
    display(stu1);

    return 0;
}

void display(GRADE stu)
{
    printf("學生:%s\n",stu.name);
    printf("數學成績:%d\n",stu.math);
    printf("英文成績:%d\n",stu.eng);
    printf("國文成績:%d\n",stu.chinese);
}