//對列舉常數設值
#include <stdio.h>

int main()
{
    char key;
    enum color
    {
        RED = 114,      //r,g,b的 ASCII碼
        GREEN = 103,
        BLUE = 98
    }shirt;

    do
    {
        printf("請輸入顏色(r,g,or b):");
        scanf("%c",&key);
        getchar();
    } while (key != RED && key != GREEN && key != BLUE);

    shirt = key;

    switch (shirt)
    {
        case RED:
            printf("你選了紅色");
            break;

        case BLUE:
            printf("你選了藍色");
            break;

        case GREEN:
            printf("你選了綠色");
            break;
        
        default:
            break;
    }
    
    return 0;
}