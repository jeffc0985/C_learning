//#if # elif #else #endif #undef
#include <stdio.h>
#include <string.h>

#define SIZE 20

int main()
{
    char str[SIZE];

    #ifdef SIZE
        #if SIZE > 30
            strcpy(str,"Hello C language!");
        #elif SIZE > 20 && SIZE <= 30
            strcpy(str,"Hi C world!");
        #else
            strcpy(str,"SIZE too small");
        #endif
    #else   
        strcpy(str,"SIZE not defined");
    #endif

    printf("%s\n",str);

    #undef SIZE     //取消定義

    #ifdef SIZE
        #if SIZE > 30
            strcpy(str,"Hello C language!");
        #else
            strcpy(str,"SIZE too small");
        #endif
    #else   
        strcpy(str,"SIZE not defined");
    #endif

    printf("%s",str);

    return 0;
}