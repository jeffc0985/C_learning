//字串陣列
#include <stdio.h>

int main()
{
    int i;
    char stu[3][15] = {"Tom","Jeff Chen","Amy_123"};

    for(i=0;i<3;i++)
        printf("stu[%d]=%s\n",i,stu[i]);
    printf("\n");
    for(i=0;i<3;i++)
        {
            printf("stu[%d]的地址為:%p\n",i,stu[i]);
            printf("stu[%d][0]的值為:%c\n",i,stu[i][0]);
            printf("stu[%d][0]的地址為:%p\n\n",i,&stu[i][0]);
        }   

    return 0;
}