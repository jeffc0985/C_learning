//利用雙重指針print出二維陣列
#include <stdio.h>

int main()
{
    int num[3][4] = {{41,88,79,15},{2,36,58,67},{99,31,71,59}};
    int i, j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)  
            printf("num[%d][%d]=%2d, 地址為:%p\n",i,j,*(*(num+i)+j),(*(num+i)+j));
        printf("\n");
    }

    printf("**num=%d",**num);
        
    return 0;
}