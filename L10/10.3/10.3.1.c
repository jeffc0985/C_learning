#include <stdio.h>

int main()
{
    int i, A[5] = {1,2,3,4,5};

    printf("A=%p\n",A);
    printf("&A=%p\n",&A);

    for(i=0;i<5;i++)
        printf("&A[%d]=%p\n",i,&A[i]);

    return 0;
}