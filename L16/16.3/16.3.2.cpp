//函數多載(引數個數不同)
#include <iostream>
using namespace std;

void star(int, int);
void star(int);

int main()
{
    star(8);
    star(7,3);

    return 0;
}

void star(int a)
{
    int i;
    for (i=1 ; i<=a ; i++)
        cout << "*";
    cout << endl << endl;
}

void star(int len, int wid)
{
    int i, j;
    for (i=1 ; i<=wid ; i++)
    {
        for (j=1 ; j<=len ; j++)
            cout << "*";
        cout << endl;
    }
}