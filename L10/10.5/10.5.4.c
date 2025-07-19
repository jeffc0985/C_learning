//利用雙重指針修改二維陣列的值
#include <stdio.h>

int main()
{
    int num[3][4] = {{41,88,79,15},{2,36,58,67},{99,31,71,59}};
    int i, j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(*(*(num+i)+j)>40)
                *(*(num+i)+j) =40;

            printf("%2d ",*(*(num+i)+j));
        }

        printf("\n");
    }
    
    return 0;
}