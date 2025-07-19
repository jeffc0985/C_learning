#include <stdio.h>

int main() 
{
    char ch = 'a';                      //宣告字元變數 ch 並設值 a
    printf("ch= %c\n",ch);              //print ch 的值
    printf("ASCII of ch = %d\n",ch);    //print ch 的 ASCII碼
    
    char ch2 = '5';                     //宣告字元變數 ch2 並設值 5
    printf("ch2=%c\n",ch2);             //print ch2 的值
    printf("ASCII of ch2 = %d\n",ch2);  //print ch2(5) 的 ASCII碼(53)

    char ch3 = 7;
    /*相當於 char ch3 ='BEL'*/                       
    printf("ch3=%c\n",ch3);             //宣告字元變數 ch3 並設值"ASCII碼為5的值"
    printf("ASCII of ch3 = %d\n",ch3);    
    return 0;
}