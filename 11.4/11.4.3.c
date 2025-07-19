//傳遞結構陣列到函數
#include <stdio.h>

#define MAX 3
struct data
{
    char name[10];
    int score;
}stu[MAX];

int find_max_idx(struct data arr[]);
int main()
{
    struct data stu[MAX] = {{"Tom",60},{"Jeff",100},{"Amy",80}};
    int idx = find_max_idx(stu);

    printf("最高分為:%s, %d分\n",(stu+idx)->name,(stu+idx)->score);

    return 0;
}

int find_max_idx(struct data arr[])
{
    int i, max, idx = 0;
    max = arr->score;

    for(i=1;i<MAX;i++)
        if((arr+i)->score > max)
        {
            max = (arr+i)->score;
            idx = i;
        }
    return idx;
}