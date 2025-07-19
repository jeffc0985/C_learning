#include <stdio.h>

int main()
{
    int A[5] = {74,48,15,92,60};
    int i, min,max;
    min = max = A[0];

    for(i=0;i<=4;i++)
        {
            if (A[i]>max)
                max = A[i];
            if (A[i]<min)
                min = A[i];
        }
    printf("陣列中元素最大值為:%d\n",max);
    printf("陣列中元素最小值為:%d\n",min);

    return 0;
}