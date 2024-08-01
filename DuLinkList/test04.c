//
// Created by kitsc on 2024/8/1.
//

#include "DuLinkList.h"

int main()
{
    DuLNode *H;
    InitDuList(&H);
    AssignDuList(&H, 1);
    AssignDuList(&H, 2);
    AssignDuList(&H, 3);
    AssignDuList(&H, 4);
    PrintList(H);
    InsertDuList(&H, 4, 80);
    PrintList(H);
    DelDulist(&H, 5);
    PrintList(H);
    DesDuList(&H);
    return 0;
}