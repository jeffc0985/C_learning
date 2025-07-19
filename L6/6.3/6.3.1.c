//switch 和 break
#include <stdio.h>

int main()
{
    int a, b;
    char oper;

    printf("請輸入運算式(如3+2):");
    scanf("%d %c %d",&a,&oper,&b);

    switch (oper)
    {
        case '+':
            printf("%d+%d=%d\n",a,b,a+b);
            break;

        case '-':
            printf("%d-%d=%d\n",a,b,a-b);
            break;

        case '*':
            printf("%d*%d=%d\n",a,b,a*b);
            break;

        case '/':
            printf("%d/%d=%.3f\n",a,b,(float)a/b);
            break;

        default:
            printf("無法辨認!!\n");
    }

    return 0;
}