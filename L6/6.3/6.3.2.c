//不同選擇植處理相同敘述
#include <stdio.h>

int main()
{
    char grade;
    printf("請輸入你的等第:");
    scanf("%c",&grade);

    switch (grade)
    {
        case 'a':
        case 'A':
            printf("Excellent!!");
            break;

        case 'b':
        case 'B':
            printf("Great!!");
            break;
        case 'c':
        case 'C':
            printf("Study hard!!");
            break;
        case 'f':
        case 'F':
            printf("Failed!!");
            break;
    
        default:
            printf("輸入錯誤!!");
    }
    return 0;
}