//創建、印出、釋放串列
#include <stdio.h>
#include <stdlib.h>
#include "D:\C_projects\c_learning\class_prog\L14\14.3\LinkList.h"

int main()
{
    int arr[] = {12,24,36,48};
    NODE* p_first = createList(arr,4);

    printList(p_first);
    freeList(p_first);

    return 0;
}