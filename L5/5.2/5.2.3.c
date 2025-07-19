//運算式的型態轉換(型態取大)
#include <stdio.h>

int main()
{
    char ch = 'a';
    int i = 5;
    short s = -2;
    float f = 3.14f;
    double d = 2.718;

    printf("(ch/s)-(d/f)-(s+i)=%f\n",(ch/s)-(d/f)-(s+i));
    //    轉short 轉double 轉int
    //       轉double        |
    //            轉double------->print out  
    printf("size=%d\n",sizeof((ch/s)-(d/f)-(s+i)));

    return 0;
}