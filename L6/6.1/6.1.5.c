//與else配對的if會根據位置而不同
#include <stdio.h>

int main()
{
    int num;
    printf("輸入一個整數:");
    scanf("%d",&num);

    if (num>=0)

        if (num<=10)
            printf("數字介於0~10之間");
        else//和12行配對
            printf("數字大於10");

    return 0;
}