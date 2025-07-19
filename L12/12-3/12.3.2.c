//讀取有緩衝區的二進制檔案
#include <stdio.h>

int main()
{
    FILE* fptr = fopen("D:\\C_projects\\progfiles\\text.bin","rb");
    double a, b;
    int num[3], i;

    if(fptr != NULL)
    {
        fread(&a,sizeof(double),1,fptr);
        fread(&b,sizeof(double),1,fptr);
        fread(num,sizeof(int),3,fptr);
    
        printf("a=%.2lf\n",a);
        printf("b=%.2lf\n",b);
    
        for(i=0;i<3;i++)
            printf("num[%d]=%d\n",i,num[i]);
    
        fclose(fptr);
    }
    else
        printf("檔案開啟失敗!");

    return 0;
}