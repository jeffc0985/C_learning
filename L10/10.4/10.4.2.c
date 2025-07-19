//指標陣列
#include <stdio.h>

int main()
{
    char* p[3] = {"Tom", "Jeff Chen", "Amy123"};
    int i;
    for(i=0;i<3;i++)
        puts(p[i]);

    return 0;
}
//相較於二維字串陣列,指標陣列不會造成空間浪費