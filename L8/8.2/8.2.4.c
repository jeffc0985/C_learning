//質數測定函數is_prime()
#include <stdio.h>
#include <math.h>

int is_prime(int);
int main()
{
    
    int i;
    for (i=1;i<=100;i++)
    if (is_prime(i))            //if is_prime的傳回值是1,就print出
    printf("%d ",i);
    
    return 0;

    //while 寫法
    //int i = 2;
    // while (i<=100)
    // {
        
    //     if (is_prime(i))        
    //         printf("%d ",i);
    //     i++;
    // }
}

int is_prime(int n)
{
    int i;
    
    if (n<2)
        return 0;
    for(i=2;i<=sqrt(n);i++)     //i從2檢測到根號n,若有任一數能整除n,則回傳0
            if(n%i==0)
                return 0;       
                
    return 1;                   
    
}