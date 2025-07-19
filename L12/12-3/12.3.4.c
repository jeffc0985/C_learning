//讀取無緩衝區的二進制檔案
#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

int main()
{
    int f1 = open("D:\\C_projects\\progfiles\\text2.bin",O_RDONLY|O_BINARY);
    struct data
    {
        char name[10];
        int score;
    }stu;

    if(f1 != -1)
    {
        read(f1,&stu,sizeof(stu));
        printf("姓名:%s\n",stu.name);
        printf("分數:%d\n",stu.score);
        close(f1);
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}