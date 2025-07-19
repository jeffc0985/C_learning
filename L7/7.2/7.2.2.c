//infinity loop
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("按下任意鍵以獲取ASCII碼(or ctrl+l 離開):\n");

    while (ch!=12)
    {
        ch = getch();
        printf("ASCII of ch = %d\n",ch);
    }
    printf("程式結束...");
    
    return 0;
}