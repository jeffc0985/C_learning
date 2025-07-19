#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* p_next;
};
typedef struct node NODE;

NODE* createList(int*, int);
void printList(NODE*);
void freeList(NODE*);
NODE* SearchNode(NODE*, int);
void InsertNode(NODE*, int);
NODE* DeleteNode(NODE*, NODE*);

//創建數字串列。引數為陣列地址、陣列長度,回傳值為首節點地址
NODE* createList(int* arr, int len)
{
    int i;
    NODE *p_first, *p_previous, *p_current;

    for(i=0;i<len;i++)
    {
        p_current = (NODE*) malloc(sizeof(NODE));
        p_current->data = arr[i];

        if(i==0)
            p_first = p_current;
        else    
            p_previous->p_next = p_current;

        p_current->p_next = NULL;
        p_previous = p_current;
    }

    return p_first;
}

//印出串列。引數為首節點地址
void printList(NODE* p_first)
{
    NODE* p_current = p_first; 

    if(p_first == NULL)
        printf("List is empty!");
    else
    {
        while (p_current != NULL)
        {
            printf("%d ",p_current->data);
            p_current = p_current->p_next;
        }
        printf("\n");
    }
}

//釋放串列記憶體。引數為首節點地址
void freeList(NODE* p_first)
{
    NODE *p_current, *p_temp;
    p_current = p_first;

    while (p_current != NULL)
    {
         p_temp = p_current;
         p_current = p_current->p_next;
         free(p_temp);
    }
    
}

//尋找節點。引數為首節點地址、要找的值,回傳值為該值所在節點地址
NODE* SearchNode(NODE* p_first, int item)
{
    NODE* p_current = p_first;
    while (p_current != NULL)
    {
        if(p_current->data == item)
            return p_current;
        else
            p_current = p_current->p_next;
    }

    return NULL;
}

//插入節點。引數為待插入節點地址、該節點的值
void InsertNode(NODE* p_node, int item)
{
    NODE* p_newnode = (NODE*) malloc(sizeof(NODE));
    
    p_newnode->data = item;
    p_newnode->p_next = p_node->p_next;
    p_node->p_next = p_newnode;
}

//刪除節點。引數為首節點地址、待刪除節點地址,回傳值為刪除後首節點地址
NODE* DeleteNode(NODE* p_first, NODE* p_node)
{
    NODE* p_current = p_first;

    if(p_first == NULL)
    {
        printf("Nothing to delete!");
        return NULL;
    }

    if(p_node == p_first)
        p_first = p_first->p_next;
    else
    {
        while (p_current->p_next != p_node)
            p_current = p_current->p_next;

        p_current->p_next = p_node->p_next;
    }

    free(p_node);

    return p_first;
}