//命令列引數
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;

    printf("argc的值為:%d\n",argc);

    for(i=0;i<argc;i++)
        printf("argv[%d]=%s\n",i,argv[i]);
        
    return 0;
}