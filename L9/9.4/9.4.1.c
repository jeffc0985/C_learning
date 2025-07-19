#include <stdio.h>

int main()
{
    char ch = 'a';
    char str1[] = "a";
    char str2[] = "jeff chen";

    printf("ch占了%d個bytes\n",sizeof(ch));         //1
    printf("str1占了%d個bytes\n",sizeof(str1));     //2
    printf("str2占了%d個bytes\n",sizeof(str2));     //10

    return 0;
}
//字串有隱藏的\0表示終止