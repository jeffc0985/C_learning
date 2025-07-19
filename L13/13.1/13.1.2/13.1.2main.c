//模組化及共同編譯
#include <stdio.h>

double area(double);
double peri(double);

int main()
{
    printf("area(2.2)=%.2lf\n",area(2.2));
    printf("peri(1.5)=%.2lf\n",peri(1.5));

    return 0;
}