//不可利用雙重指標傳遞二維陣列
#include <stdio.h>

void no_larger_40(int arr[][4]);
//錯誤! void no_larger_40(int **);
int main()
{
    int num[3][4] = {{41,88,79,15},{2,36,58,67},{99,31,71,59}};
    no_larger_40(num);
    

    return 0;
}

void no_larger_40(int arr[][4])
//錯誤! void no_larger_40(int** arr);
{
    int i, j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(*(*(arr+i)+j)>40)
                *(*(arr+i)+j) =40;

            printf("%2d ",*(*(arr+i)+j));
        }

        printf("\n");
    }
}