//二維陣列的傳遞
#include <stdio.h>

#define ROW 4
#define COL 3

void search(int a[][COL],int b[]);  //多維陣列宣告時僅最左邊可空白
int main()
{
    int A[][COL] = {{85,9,14},{78,22,62},{99,1,58},{26,34,40}};
    int B[2];
    int i, j;

    printf("二維陣列A的元素:\n");
    for(i=0;i<ROW;i++)
        {
            for(j=0;j<COL;j++)
                printf("%02d ",A[i][j]);
            printf("\n");
        }
    search(A,B);
    printf("在二維陣列A中,最大值為:%d,最小值為%d",B[1],B[0]);

    return 0;
}

void search(int a[][COL],int b[])
{
    int i, j, min, max;
    max = min = a[0][0];
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
            {
                if(a[i][j]>max)
                    max = a[i][j];
                if(a[i][j]<min)
                    min = a[i][j];
            }

    b[1] = max;
    b[0] = min;         //在陣列函數裡修改形參,實參也會改變,不用再return
}