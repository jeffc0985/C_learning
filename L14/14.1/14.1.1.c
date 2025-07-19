//malloc() 和 free()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int* ptr = (int*) malloc(3*sizeof(int));

    *ptr = 12;
    *(ptr+1) = 24;
    *(ptr+2) = 36;
    
    for(i=0;i<3;i++)
        printf("*(ptr+%d)=%d\n",i,*(ptr+i));

    free(ptr);

    return 0; 
}