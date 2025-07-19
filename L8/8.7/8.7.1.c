//使用自訂義的標頭檔
#include <stdio.h>
#include "D:\C_projects\c_learning\class_prog\L8\8.7\my_area.h"

int main()
{
    float base, height, r;

    printf("請輸入三角形的底:");
    scanf("%f",&base);
    printf("請輸入三角形的高:");
    scanf("%f",&height);
    printf("請輸入圓的半徑:");
    scanf("%f",&r);

    printf("三角形面積為:%.3f\n",TRIANGLE(base,height));
    printf("圓面積為:%.3f",CIRCLE(r));
    
    return 0;
}