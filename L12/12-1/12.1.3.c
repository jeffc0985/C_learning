//輸入字串並附加到檔案
#include <stdio.h>
#include <conio.h>

#define MAX 80
#define ENTER 13
int main()
{
    FILE *fptr = fopen("D:\\C_projects\\progfiles\\output.txt","a");
    char ch, str[MAX];

    if(fptr != NULL)
    {
        int i = 0;
        printf("請輸入字串,按Enter結束輸入:\n");
        while ((ch = getche()) != ENTER && i<MAX)
        {
            str[i] = ch;
            i++;
        }
    
        putc('\n',fptr);
        fwrite(str,sizeof(ch),i,fptr);
        fclose(fptr);
        printf("\n檔案附加完成!");
    }
    else
        printf("\n檔案開啟失敗!");
    
    return 0;
}