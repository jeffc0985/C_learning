//節點與靜態鏈結串列
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;

int main()
{
    NODE a, b, c;
    NODE* ptr = &a;

    a.data = 12;
    a.next = &b;

    b.data = 24;
    b.next = &c;

    c.data = 36;
    c.next = NULL;

    while (ptr != NULL)
    {
        printf("address=%p\n",ptr);
        printf("data=%d\n",ptr->data);
        printf("next address=%p\n\n",ptr->next);

        ptr = ptr->next;
    }
    
    return 0;
}