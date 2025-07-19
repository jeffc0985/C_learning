//字串轉大寫函數to_upper()
#include <stdio.h>

void to_upper(char str[]);
int main()
{
    char str[20];

    printf("請輸入字串:");
    fgets(str,20,stdin);
    to_upper(str);
    printf("轉成大寫後:%s",str);

    return 0;
}

void to_upper(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i]>=97 && str[i]<=122)   //如果是小寫英文字母(小寫a=97)
            str[i] -= 32;               //變大寫(大寫A=65)
        i++;
    }
}