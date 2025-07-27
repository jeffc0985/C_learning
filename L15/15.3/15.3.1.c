//位元欄位結構
#include <stdio.h>

int main()
{
    struct status
    {
        size_t sex : 1;
        size_t marriage : 1;
        size_t age : 7; 
    }Jeff = {1,0,20};

    if(Jeff.sex == 0)
        printf("性別:女 ");
    else
        printf("性別:男 ");

    if(Jeff.marriage == 0)
        printf("未婚 ");
    else
        printf("已婚 ");

    printf("%d歲 ",Jeff.age);
    printf("\nsizeof(Jeff)=%d",sizeof(Jeff));   //8
    return 0;
}