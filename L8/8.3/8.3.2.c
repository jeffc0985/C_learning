//函數互相呼叫(Leibniz function)
#include <stdio.h>

double power(double,int);
double Leibniz(int);
int main()
{
    int i;

    for (i=1;i<=10000;i++)
        printf("Leibniz(%d)=%12.10lf\n",i,Leibniz(i));

    return 0;
}

double Leibniz(int n)
{
    int k;
    double sum = 0;
    for(k=1;k<=n;k++)
        sum = sum + power(-1,k-1)/(2*k-1);
    return sum*4;

}

double power(double x,int n)
{ 
    int i;
    double value = 1;

    for(i=1;i<=n;i++)
        value *= x;

    return value;
    
}