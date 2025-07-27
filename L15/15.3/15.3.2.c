#include <stdio.h>

int main()
{
    struct status
    {
        size_t sex : 1;
        size_t marriage : 1;
        size_t age : 7; 
    }Jeff;

    int num;
    printf("請輸入年齡:");
    scanf("%d",&num);

    Jeff.age = num;     //超過127時會從0開始重算

    printf("%d",Jeff.age);
    return 0;
}