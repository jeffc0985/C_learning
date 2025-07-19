//尋找、插入節點
#include <stdio.h>
#include <stdlib.h>
#include "D:\C_projects\c_learning\class_prog\L14\14.3\LinkList.h"

int main()
{
    int arr[] = {10,20,40};
    NODE* p_first, *p_node;

    p_first = createList(arr,3);
    printList(p_first);

    p_node = SearchNode(p_first,20);
    InsertNode(p_node,30);

    printList(p_first);
    freeList(p_first);

    return 0;
}