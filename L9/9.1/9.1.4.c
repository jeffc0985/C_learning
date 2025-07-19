//自行設定陣列初值
#include <stdio.h>

int main()
{
    int i;
    int age[3];

    for(i=0;i<3;i++)
    {
        printf("請輸入age[%d]的值:",i);
        scanf("%d",&age[i]);        
    }

    for(i=0;i<3;i++)
        printf("age[%d]=%d\n",i,age[i]);
    
    return 0;
}