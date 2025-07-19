//用#define定義常變量
#include <stdio.h>

#define PI 3.14
double area(double);
int main()
{
    //if 在此設值PI = 3.141會報錯,因為3.14 !=3.141
    double r;
    printf("請輸入半徑:");
    scanf("%lf",&r);

    printf("PI=%.2f,area=%.3f",PI,area(r));
    return 0;
}

double area(double r)
{
    return PI*r*r;

}
//可以防止重要常數不小心被修改