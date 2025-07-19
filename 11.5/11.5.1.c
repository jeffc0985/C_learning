//列舉型態enum
#include <stdio.h>

int main()
{
    enum color
    {
        RED,
        GREEN,
        BLUE
    }shirt, hat;

    shirt = GREEN;
    
    if(shirt == GREEN)
        printf("衣服為綠色");
    else    
        printf("衣服不是綠色");
            
    return 0;
}