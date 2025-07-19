//二維陣列與雙重指標
#include <stdio.h>

int main()
{
    int num[3][4];

    printf("num=%p, &num=%=====p, *num=%p\n",num,&num,*num);
    printf("num[0]=%p, num[1]=%p, num[2]=%p\n",num[0],num[1],num[2]);
    printf("&num[0]=%p, &num[1]=%p, &num[2]=%p\n",&num[0],&num[1],&num[2]);

    int i;
    for(i=0;i<3;i++)
        printf("&num[%d][0]=%p,  ",i,&num[i][0]);
   
    return 0;
} 