//刪除節點
#include <stdio.h>
#include <stdlib.h>
#include "D:\C_projects\c_learning\class_prog\L14\14.3\LinkList.h"

int main()
{
    int arr[] = {10,20,30};
    NODE *p_first, *p_node;

    p_first = createList(arr,3);
    printList(p_first);

    //刪除值為20的節點
    p_node = SearchNode(p_first,20);    //找到節點20並設定為待刪除節點
    p_first = DeleteNode(p_first,p_node);
    printList(p_first);

    //刪除第一個節點
    p_first = DeleteNode(p_first,p_first);
    printList(p_first);


    p_first = DeleteNode(p_first,p_first);
    printList(p_first);

    freeList(p_first);

    return 0;
}