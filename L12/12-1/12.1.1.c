//有緩衝區的檔案處理
//顯示檔案內容並計算字元數
#include <stdio.h>

int main()
{
    FILE *fptr = fopen("D:\\C_projects\\progfiles\\hello.txt","r");
    char ch;
    int count = 0;
    
    if(fptr != NULL)
    {
        while ((ch=getc(fptr)) != EOF)
        {
            printf("%c",ch);
            count++;
        }
        fclose(fptr);
        printf("\n檔案共有%d個字元",count);
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}