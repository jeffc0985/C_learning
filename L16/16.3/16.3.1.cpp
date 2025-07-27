//函數的多載(引數類型不同)
#include <iostream>
using namespace std;

void show(int);
void show(double);

int main()
{
    int a = 4;
    double b = 3.1416;

    show(a);
    show(b);

    return 0;
}

void show(int num)
{
    cout << num << endl;
}

void show(double num)
{
    cout << num << endl;
}