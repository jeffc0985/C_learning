#include <stdio.h>

void replace(int*,int,int);
int main()
{
    int i, num = 100;
    int arr[5] = {87,46,94,2,17};

    replace(arr,4,num);     //把陣列arr第4個元素換成num

    printf("置換後,陣列arr為:");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);    

    return 0;
}

void replace(int *p,int n,int num)
{
    *(p+(n-1)) = num;

}