//矩陣相加
#include <stdio.h>

#define ROW 2
#define COL 3
int main()
{
    int i, j;
    int A[ROW][COL] = {{2,4,3},{4,1,7}};
    int B[ROW][COL] = {{1,3,6},{8,10,0}};

    printf("矩陣A+B為:\n");

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            printf("% 3d",A[i][j]+B[i][j]);
        printf("\n");
    } 

    return 0;
        
}