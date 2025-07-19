//字串陣列的複製
#include <stdio.h>

#define MAX 3
#define LENGTH 15
int main()
{
    char name[MAX][LENGTH] = {"Tom","Jeff Chen","Amy_123"};
    char name_copy[MAX][LENGTH];
    int i, j;

    for(i=0;i<MAX;i++)
        for(j=0;j<LENGTH;j++)
            if(name[i][j] == '\0')
                {   
                    name_copy[i][j] = '\0'; //印到\0表示字串結束,
                    break;                  //此時複製加一個\0後跳脫印下一個
                }
            else
                name_copy[i][j] = name[i][j];
                
    for(i=0;i<MAX;i++)
        printf("name_copy[%d]=%s\n",i,name_copy[i]);

    return 0;
}