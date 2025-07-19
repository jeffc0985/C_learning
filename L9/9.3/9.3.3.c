//函數傳址機制
#include <stdio.h>

#define SIZE 3
void func(int arr[]);
int main()
{
    int i;
    int A[SIZE]= {10,8,3};

    printf("在main()裡,陣列A中元素的地址為:\n");
    for(i=0;i<SIZE;i++)
        printf("A[%d]=%d,地址為:%p\n",i,A[i],&A[i]);
    func(A);

    printf("陣列A的地址為:%p",A);  //陣列的地址即第一個元素的地址
                                  //陣列名本身也是存放地址的變數
    
}

void func(int arr[])
{
    int i;
    printf("在func()裡,陣列arr[]中元素的地址為:\n");
    for(i=0;i<SIZE;i++)
        printf("arr[%d]=%d,地址為:%p\n",i,arr[i],&arr[i]);
    

}