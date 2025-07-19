//const修飾的常變量
#include <stdio.h>

const double pi = 3.14;
double area(double);
int main()
{
    //if 在此設值pi = 3.141也會報錯(地頭蛇失效)
    double r;
    printf("請輸入半徑:");
    scanf("%lf",&r);

    printf("pi=%.2f,area=%.3f",pi,area(r));
    return 0;
}

double area(double r)
{
    return pi*r*r;

}
//可以防止重要常數不小心被修改
//都具有讓地頭蛇失效的效果,但原理不同