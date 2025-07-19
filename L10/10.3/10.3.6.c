#include <stdio.h>

#define SIZE 5
int *max(int*);
int main()
{
    int i;
    int A[SIZE] = {7,89,15,101,28};

    printf("陣列A=");
    for(i=0;i<SIZE;i++)
        printf("%d ",A[i]);

    int *p = max(A);    //把max(A)的地址給指標p

    printf("\nmax=%d",*p);

    return 0;
}

int *max(int *p)
{
    int *max = p;   //先把arr[0]的地址給指標max
    int i;

    for(i=1;i<SIZE;i++)
        if(*(p+i)>*max)     
            max = p+i;       
            
    return max;

}