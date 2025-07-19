//getchar和putchar
#include <stdio.h>

int main()
{
    char ch;

    printf("輸入一個字元:");
    ch = getchar();

    printf("your input is:");
    putchar(ch);
    putchar('\n');

    return 0;
}
/*putchar 只能處理單一字元*/