//#ifdef #else #endif
#include <stdio.h>

#define HI "Hello C language!\n"
int main()
{
    #ifdef HI
        printf(HI);
    #else
        printf("HI 沒有定義");
    #endif
    
    return 0;
}