//指標指向字串
#include <stdio.h>

int main()
{
    char name[30];
    char* p = "How are you?";   //此時p指向'H'的地址

    printf("What's your name? ");
    fgets(name,30,stdin);

    //剔除\n
    int i;
    for(i=0;name[i]!='\0';i++)
        if(name[i] == '\n' )
            name[i] = '\0';

    printf("Hi! %s, ",name);
    puts(p);

    return 0;
}