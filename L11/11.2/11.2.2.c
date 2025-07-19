//對結構陣列設值
#include <stdio.h>

#define MAX 5
int main()
{
    struct data
    {
        char name[10];
        int score;
    }stu[MAX];

    int i;
    for(i=0;i<MAX;i++)
    {
        printf("學生姓名:");
        fgets(stu[i].name,10,stdin);

        for(int j=0;stu[i].name[j]!='\0';j++)
            if(stu[i].name[j] == '\n')
                stu[i].name[j] = '\0';
        
        printf("成績:");
        scanf("%d",&stu[i].score);
        getchar();  //清除緩衝區的\n
        
    }
    printf("*******output*******\n");

    for(i=0;i<MAX;i++)
        printf("%-10s 成績為%2d分\n",stu[i].name,stu[i].score);

    return 0;
}