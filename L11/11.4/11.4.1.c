//傳遞結構到函數
#include <stdio.h>

struct data     //注意結構型態要設成全域讓函數存取
{
    char name[10];
    int score;
};

void display(struct data);
int main()
{
    struct data stu1 = {"Tom",80};
    display(stu1);

    return 0;
}

//結構變數為傳值機制
void display(struct data stu)
{
    printf("學收姓名:%s\n",stu.name);
    printf("成績:%d\n",stu.score);

}