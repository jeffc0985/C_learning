/*控制輸出寬度*/
#include <stdio.h>

int main()
{
    int d1 = 32, d2 = 1024;
    float d3 = 3.1299f;

    printf("The distance from A to B is %6d km\n",d1);          // 6格寬
    printf("The distance from C to D is %-6d km\n",d2);         // 6格寬 且 靠左
    printf("The distance from E to F is %6.2f mile\n",d3);      // 6格寬 且 四捨五入到小數點第2位

    return 0;
}