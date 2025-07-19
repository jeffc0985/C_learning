//建立新指標,取代指標常數存取一維陣列
#include <stdio.h>

int main()
{
    int i, sum = 0;
    int A[5] = {1,2,3,4,5};

    int *p = A;     //由於A的地址不能變,所以創建可變指標p來存取陣列

    for(i=0;i<5;i++)
        sum += *(p++);  //每次指標+1,指向下一個元素

    printf("陣列A的元素和為:%d",sum);
    return 0;
}