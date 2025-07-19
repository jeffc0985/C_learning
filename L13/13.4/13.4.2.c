//命令列引數應用(複製檔案)
#include <stdio.h>

int main(int argc,char* argv[])
{
    FILE* fptr; 
    FILE* fptr_cpy;
    char ch;
    if(argc == 3)
    {
        fptr = fopen(argv[1],"r");
        fptr_cpy = fopen(argv[2],"w");

        if(fptr != NULL && fptr_cpy != NULL)
        {
            while ((ch = getc(fptr)) != EOF)
            {
                putc(ch,fptr_cpy);
            }
            fclose(fptr);
            fclose(fptr_cpy);
            printf("檔案拷貝完成!");
        }
        else
            printf("檔案開啟失敗!");
    }
    else
        printf("請重新檢查輸入!");
        
    return 0;
}