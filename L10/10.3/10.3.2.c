//指標的運算
#include <stdio.h>

int main()
{
    int A[3] = {10,20,30};

    //陣列A的地址=A[0]的地址
    printf("A[0]=%d, *(A+0)=%d\n",A[0],*(A+0));
    printf("A[1]=%d, *(A+1)=%d\n",A[1],*(A+1));
    printf("A[2]=%d, *(A+2)=%d\n",A[2],*(A+2));
    //加多少位元組"視指標變數的類型而定"
    return 0;
}