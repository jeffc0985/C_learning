//列舉常數的本質是int
#include <stdio.h>

int main()
{
    enum color
    {
        RED,        //預設0開始
        GREEN,
        BLUE
    }shirt;

    shirt = GREEN;
    
    printf("RED=%d\n",RED);
    printf("shirt=%d\n",shirt);
    
    printf("sizeof(RED)=%d\n",sizeof(RED));
    printf("sizeof(shirt)=%d\n",sizeof(shirt));
    
    return 0;
}