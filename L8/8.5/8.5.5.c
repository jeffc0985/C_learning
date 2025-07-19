//靜態變數
#include <stdio.h>

void func();
int main()
{
    func();
    func();
    func();

    return 0;
}

void func()
{
    static int a = 50;      //函數結束時靜態變數的值不會消失,所以在第二次進入時不會賦值
    printf("In func(),a=%d\n",a);
    a += 100;

}
//50 -> 150 -> 250