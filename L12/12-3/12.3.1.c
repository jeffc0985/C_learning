//寫入有緩衝區的二進制檔案
#include <stdio.h>

int main()
{
    FILE* fptr = fopen("D:\\C_projects\\progfiles\\text.bin","wb");
    double a = 3.14, b = 6.28;
    int num[] = {12,24,36};

    if(fptr != NULL)
    {
        fwrite(&a,sizeof(double),1,fptr);
        fwrite(&b,sizeof(double),1,fptr);
        fwrite(num,sizeof(int),3,fptr);
   
        fclose(fptr);
        printf("檔案寫入完成!");
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}