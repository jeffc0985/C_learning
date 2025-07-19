//結構的設值
#include <stdio.h>

int main()
{
    struct data
    {
        char name[10];
        int score;
    };
    
    struct data stu1 = {"Tom",100};
    struct data stu2 = stu1;

    printf("stu1.name=%s, stu1.math=%d\n",stu1.name,stu1.score);
    printf("stu2.name=%s, stu2.math=%d\n",stu2.name,stu2.score);

    return 0;
}