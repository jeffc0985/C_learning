//nested if 
#include <stdio.h>

int main()
{
    int score;
    printf("請輸入你的成績:");
    scanf("%d",&score);

    if (score>=80)
        printf("%d is A",score);
    else if (score>=70)
            printf("%d is B",score);
         else if (score>=60)
                printf("%d is C",score);
              else
                printf("You\'re failed!");    
    
    return 0;
}