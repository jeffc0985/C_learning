//動態記憶體配置
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j;
    struct student
    {
        char name[20];
        int score;
    }*ptr;

    printf("請輸入學生人數:");
    scanf("%d",&num);

    ptr = (struct student*) malloc(num*sizeof(struct student));

    for(i=0;i<num;i++)
    {
        getchar();
        printf("請輸入姓名:");
        fgets((ptr+i)->name,20,stdin);
        
        for(j=0;(ptr+i)->name[j] != '\0';j++)  
            if((ptr+i)->name[j] == '\n')
                (ptr+i)->name[j] = '\0';
                
        printf("請輸入分數:");
        scanf("%d",&(ptr+i)->score);
    }

    printf("*******output*******\n");

    for(i=0;i<num;i++)
        printf("%s:%d分\n",(ptr+i)->name,(ptr+i)->score);

    free(ptr); 

    return 0;
}