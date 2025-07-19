//指向結構的指標
#include <stdio.h>

int main()
{
    struct data
    {
        char name[10];
        int math;
        int eng;
    }stu;

    struct data* p = &stu;

    printf("學生姓名:");
    fgets(p->name,10,stdin);
    printf("數學成績:");
    scanf("%d",&p->math);
    printf("英文成績:");
    scanf("%d",&p->eng);

    for(int i=0;p->name[i]!='\0';i++)
        if(p->name[i] == '\n')
            p->name[i] = '\0';

    printf("學生%s:數學%d分, 英文%d分\n",p->name,p->math,p->eng);
    printf("平均:%.2f分",(p->eng + p->math)/2.0);

    return 0;
}