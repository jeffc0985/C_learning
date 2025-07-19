//寫入無緩衝區的二進制檔案
#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

int main()
{
    int f1 =  open("D:\\C_projects\\progfiles\\text2.bin",O_WRONLY|O_CREAT|O_BINARY,S_IREAD);
    struct data
    {
        char name[10];
        int math;
    }stu = {"Jeff",100};
    
    if(f1 != -1)
    {
        write(f1,&stu,sizeof(stu));
        close(f1);
        printf("資料已寫入檔案!");
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}