//動態鏈結串列
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* p_next;
};
typedef struct node NODE;

int main()
{
    int i, value, num;
    NODE *p_first, *p_current, *p_previous;
    printf("節點數量:");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        p_current = (NODE*) malloc(sizeof(NODE));

        printf("請輸入節點%d數據:",i+1);
        scanf("%d",&p_current->data);

        if(i==0)
            p_first = p_current;
        else
            p_previous->p_next = p_current;
        
        p_current->p_next = NULL;
        p_previous = p_current; 

    }

    printf("**********output**********\n");

    p_current = p_first;

    for(i=1;p_current != NULL;i++)
    {
        printf("add of node %d = %p\n",i,p_current);
        printf("value of data %d = %d\n",i,p_current->data);
        printf("next add = %p\n\n",p_current->p_next);

        p_current = p_current->p_next;
    }
    
    return 0;
}