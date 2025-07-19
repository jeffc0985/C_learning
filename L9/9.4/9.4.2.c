//字串輸入/輸出函數fgets()/puts()
#include <stdio.h>

int main()
{
    char name[15];
    puts("What's your name?");
    fgets(name,15,stdin);   //fgets(字元陣列名稱, 陣列大小, 輸入來源);
    puts("Hi!");
    puts(name);
    puts("How are you?");   //puts 會自己換行

    return 0;
}