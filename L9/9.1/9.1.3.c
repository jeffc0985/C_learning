//計算陣列個數
#include <stdio.h>

int main()
{
    double data[4];

    printf("陣列元素佔%d個byte\n",sizeof(data[0]));
    printf("整個陣列佔%d個byte\n",sizeof(data));
    printf("陣列個數為:%d\n",sizeof(data)/sizeof(data[0]));

    return 0;
}