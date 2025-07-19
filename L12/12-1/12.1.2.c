//拷貝檔案至其他檔案
#include <stdio.h>

int main()
{
    FILE *fptr1, *fptr2;
    char ch;

    fptr1 = fopen("D:\\C_projects\\progfiles\\hello.txt","r");
    fptr2 = fopen("D:\\C_projects\\progfiles\\output.txt","w");

    if(fptr1 != NULL && fptr2 != NULL)
    {
        while ((ch = getc(fptr1)) != EOF)   
            putc(ch,fptr2);

        fclose(fptr1);
        fclose(fptr2);
        printf("檔案拷貝完成!");    
    }
    else
        printf("檔案開啟失敗!");        
        
    return 0;
}