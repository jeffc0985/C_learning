//結構的空間
#include <stdio.h>

int main()
{
    struct data
    {
        char name[10];  //10
        int score;      //4

    }student;

    //以結構中最大空間的類型的倍數來計算
    printf("sizeof(student)=%d",sizeof(student));   //16,而不是14

    return 0;
}