//二維陣列
#include <stdio.h>
  
int main()
{
    int i, j, sum = 0;
    int sale[2][4];
    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            {
                printf("業務員%d的第%d季銷售業績:",i+1,j+1);
                scanf("%d",&sale[i][j]);
            }

    printf("******output******\n");

    for(i=0;i<2;i++)
        {
            printf("業務員%d的業績分別為:",i+1);
            for(j=0;j<4;j++)
                {
                    printf("%d ",sale[i][j]);
                    sum += sale[i][j];
                }
            printf("\n");
        }

    printf("總銷售量為:%d",sum);    

    return 0;
}