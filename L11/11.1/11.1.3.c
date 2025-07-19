//設定結構初值
#include <stdio.h>

int main()
{
    struct data
    {
        char name[10];
        int score;
    };
    
    struct data stu1 = {"Jeff",78}, stu2 = {"Tom",60};

    printf("%s, %d\n",stu1.name,stu1.score);
    printf("%s, %d\n",stu2.name,stu2.score);

    return 0;
}