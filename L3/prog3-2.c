/*短資料整數型態的溢位*/
#include <stdio.h>
int main() 
{
    short sum,s = 32767;
    sum = s+1;
    printf("s+1 = %d\n",sum);
    sum = s+2;
    printf("s+2 = %d",sum);
    return 0;
}