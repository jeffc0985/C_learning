//傳遞結構地址到函數 
#include <stdio.h>

struct data
{
    char name[10];
    int score;
};

void swamp(struct data*, struct data*);
int main()
{
    struct data stu1 = {"Jeff",100}, stu2 = {"Tom",60};
    swamp(&stu1,&stu2);

    printf("呼叫swamp()後:\n");
    printf("stu1.name=%s, stu1.score=%d\n",stu1.name,stu1.score);
    printf("stu2.name=%s, stu2.score=%d\n",stu2.name,stu2.score);

    return 0;
}

void swamp(struct data* stu1, struct data* stu2)
{
    struct data temp;

    temp = *stu1;
    *stu1 = *stu2;
    *stu2 = temp;
}