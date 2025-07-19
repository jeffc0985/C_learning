//指標表示結構陣列
#include <stdio.h>

#define MAX 3
int main()
{
    struct data
    {
        char name[10];
        int math;
    }stu[3] = {{"Mary",78},{"Jeff",100},{"Tom",60}};

    int max, i, index = 0;
    max = stu->math;    //陣列名也是一個指標,可以做運算,指向stu[0]
                        //相當於stu[0].math
    for(i=1;i<MAX;i++)
        if((stu+i)->math > max)
        {
            max = (stu+i)->math;
            index = i;
        }

    printf("最高分為%s, %d分",(stu+index)->name,(stu+index)->math);

    return 0;
}