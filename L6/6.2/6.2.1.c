//條件運算子?:
#include <stdio.h>

int main()
{
    int a, b, big;
    printf("輸入兩整數:");
    scanf("%d %d",&a,&b);

    a > b ?(big = a):(big = b);
    //big = a > b ? a : b

    printf("%d比較大",big);

    return 0;
}