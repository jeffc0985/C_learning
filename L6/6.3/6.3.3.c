//不加break會導致錯誤
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
            printf("Excellent!!\n");

        case 'b':
        case 'B':
            printf("Great!!\n");
            
        case 'c':
        case 'C':
            printf("Study hard!!\n");

        case 'f':
        case 'F':
            printf("Failed!!\n");

    
        default:
            printf("輸入錯誤!!\n");
    }
    return 0;
}