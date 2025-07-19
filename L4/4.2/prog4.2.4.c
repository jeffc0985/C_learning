//輸入字串
#include <stdio.h>

int main()
{
    char name[10];

    printf("What's your name?");
    scanf("%s",name);               //st為陣列名稱(即陣列位置),不須加&
    printf("Hi %s ,how are you?\n",name);

    return 0;
}

//讀到空白就會停止,所以字串中間 不能有空白