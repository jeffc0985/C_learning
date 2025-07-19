//讀取檔案並print出
#include <stdio.h>

#define MAX 80
int main()
{
    FILE *fptr = fopen("D:\\C_projects\\progfiles\\output.txt","r");
    char str[MAX];
    int bytes;

    if(fptr != NULL)
    {
        while (feof(fptr) == 0)
        {
            bytes = fread(str,sizeof(char),MAX,fptr);
            if(bytes < MAX)
                str[bytes] = '\0';
    
            printf("%s",str);
        }
        fclose(fptr);
        return 0;
    }
    else
        printf("檔案開啟失敗!");
}