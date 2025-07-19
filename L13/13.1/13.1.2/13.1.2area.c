#include <math.h>

#define PI 3.1416

void show_r(double);

double area(double r)
{
    show_r(r);
    return (PI*pow(r,2.0));
}