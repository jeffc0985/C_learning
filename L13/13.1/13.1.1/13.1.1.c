//多函數程式
#include <stdio.h>
#include <math.h>

#define PI 3.1416

void show_r(double);
double area(double);
double peri(double);

int main()
{
    printf("area(2.2)=%.2lf\n",area(2.2));
    printf("peri(1.5)=%.2lf\n",peri(1.5));

    return 0;
}

double area(double r)
{
    show_r(r);
    return (PI*r*r);
}

double peri(double r)
{
    show_r(r);
    return (2*PI*r);
}

void show_r(double r)
{
    printf("r=%.2lf, ",r);
}