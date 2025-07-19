//指標存取一維陣列
#include <stdio.h>

int main()
{
    int i, sum = 0;
    int A[5] = {1,2,3,4,5};

    for(i=0;i<5;i++)
        sum += *(A+i);

    printf("陣列A的元素和為:%d",sum);
    return 0;
}