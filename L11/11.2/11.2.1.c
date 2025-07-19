//結構陣列
#include <stdio.h>
#include <string.h>

int main()
{
    struct data
    {
        char name[10];
        int score;
    };

    struct data stu[10];
    stu[2].score = 100;
    strcpy(stu[2].name,"Tom");

    //只能用strcpy()copy Tom到stu[2].name
    //不可直接賦值,因為name是陣列名

    printf("stu[2].name=%s\n",stu[2].name);
    printf("stu[2].score=%d\n",stu[2].score);

    printf("sizeof(stu[2])=%d\n",sizeof(stu[2]));   //16
    printf("sizeof(stu)=%d\n",sizeof(stu));         //16*10=160
     
    return 0;
}