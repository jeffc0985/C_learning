//設定陣列初值
#include <stdio.h>

int main()
{
    int data[] = {12,24,36,48,60};          
    for(int i=0;i<=4;i++)
    printf("data[%d]=%d\n",i,data[i]);
    return 0;
}

//[]內為空則會自動偵測陣列大小
//陣列大小 大於 元素個數會補0, 小於 則會報錯