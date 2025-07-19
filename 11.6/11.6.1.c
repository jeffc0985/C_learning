//自定義型態typedef
#include <stdio.h>

struct data
{
    char name[10];
    int score;
};
typedef struct data SCORE;  //建立新型態SCORE
void display(SCORE);

int main()
{
    SCORE stu1 = {"Jeff",100};
    display(stu1);

    return 0;
}

void display(SCORE stu)
{
    printf("姓名:%s\n",stu.name);
    printf("成績:%d\n",stu.score);

}