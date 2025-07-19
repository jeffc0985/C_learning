//圓周長及圓面積
#include <stdio.h>

void peri(double);
void area(double);

double pi = 3.14;
int main()
{
    double r;
    printf("請輸入半徑:");
    scanf("%lf",&r);

    peri(r);
    area(r);

    return 0;
}

void peri(double r)
{
    // double peri;
    // peri = 2*pi*r;
    printf("周長為:%.3lf\n",2*pi*r);

}

void area(double r)
{
    // double area;
    // area = pi*r*r;
    printf("面積為:%.3lf\n",pi*r*r);

}