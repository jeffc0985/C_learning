//無緩衝區的檔案處理
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>

#define SIZE 512
int main()
{
    char buffer[SIZE];
    int bytes;
    int f1 = open("D:\\C_projects\\progfiles\\article.txt",O_RDONLY|O_TEXT);
    int f2 = creat("D:\\C_projects\\progfiles\\output2.txt",S_IWRITE);

    if(f1 != -1 && f2 != -1)
    {
        while ((bytes = read(f1,buffer,SIZE)) > 0)
        {
            write(f2,buffer,bytes);
        }
        close(f1);
        close(f2);
        printf("檔案拷貝完成!\n");
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}