//getche() 和 getch()
#include <stdio.h>
#include <conio.h>

int main()
{
    
    char ch, ch2;

    
    printf("輸入一個字元:");
    ch = getche();
    printf("  your input is:%c\n",ch);
    
    printf("再輸入一個字元:");
    ch2 = getch();
    printf("  your input is:%c\n",ch2);

    return 0;
}